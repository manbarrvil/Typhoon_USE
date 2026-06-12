"""
Real-time web dashboard for HIL dq-current controller simulation.
Supports single-run and batch-sweep modes.
"""

import json
import logging
import threading
import time
from collections import deque

from flask import Flask, Response, jsonify, request

app = Flask(__name__)
logging.getLogger("werkzeug").setLevel(logging.ERROR)

# ── Shared state (protected by _lock) ─────────────────────────────────────────
_lock        = threading.Lock()
_history     = deque(maxlen=5000)
_latest      = dict(t=0.0, id=0.0, iq=0.0, is_d_ref=0.0, is_q_ref=0.0)
_sim_status  = "idle"          # "idle" | "running" | "done" | "batch_done"
_batch_info  = None            # {'current': int, 'total': int, 'tau_c': float} | None
_chart_reset = False           # True → browser resets chart on next SSE tick
_run_event   = threading.Event()
_pending     = None            # {'mode': 'single', 'tau_c': float}
                               # {'mode': 'batch',  'tau_c_values': [float, ...]}


# ── API for simulation thread ──────────────────────────────────────────────────

def push_signals(t, id_val, iq_val, is_d_ref, is_q_ref):
    """Push one sample from the simulation loop to the live stream."""
    point = {
        "t":        round(float(t),        4),
        "id":       round(float(id_val),   4),
        "iq":       round(float(iq_val),   4),
        "is_d_ref": round(float(is_d_ref), 4),
        "is_q_ref": round(float(is_q_ref), 4),
    }
    with _lock:
        _history.append(point)
        _latest.update(point)


def set_status(status: str):
    global _sim_status
    with _lock:
        _sim_status = status


def set_batch_info(current: int, total: int, tau_c: float):
    global _batch_info
    with _lock:
        _batch_info = {"current": current, "total": total, "tau_c": tau_c}


def clear_batch_info():
    global _batch_info
    with _lock:
        _batch_info = None


def new_run():
    """Reset chart and signal history for a new run."""
    global _chart_reset
    with _lock:
        _history.clear()
        _latest.update(dict(t=0.0, id=0.0, iq=0.0, is_d_ref=0.0, is_q_ref=0.0))
        _chart_reset = True


def wait_for_run_request():
    """
    Block until the user clicks Run or Run Batch. Returns:
      {'mode': 'single', 'tau_c': float}
      {'mode': 'batch',  'tau_c_values': [float, ...]}
    """
    _run_event.wait()
    _run_event.clear()
    with _lock:
        return dict(_pending)


# ── Flask routes ───────────────────────────────────────────────────────────────

@app.route("/")
def index():
    return _HTML


@app.route("/start", methods=["POST"])
def start_single():
    global _pending
    data  = request.get_json(force=True)
    tau_c = float(data.get("tau_c", 1e-3))
    with _lock:
        _pending = {"mode": "single", "tau_c": tau_c}
    _run_event.set()
    return jsonify({"ok": True})


@app.route("/start_batch", methods=["POST"])
def start_batch():
    global _pending
    data   = request.get_json(force=True)
    values = [float(v) for v in data.get("tau_c_values", []) if str(v).strip()]
    if not values:
        return jsonify({"ok": False, "error": "No valid tau_c values"}), 400
    with _lock:
        _pending = {"mode": "batch", "tau_c_values": values}
    _run_event.set()
    return jsonify({"ok": True, "tau_c_values": values})


@app.route("/stream")
def stream():
    def generate():
        global _chart_reset
        sent = 0
        while True:
            with _lock:
                snapshot     = list(_history)
                status       = _sim_status
                batch_info   = dict(_batch_info) if _batch_info else None
                do_reset     = _chart_reset
                _chart_reset = False

            new_pts = snapshot[sent:]
            sent    = len(snapshot)
            payload = json.dumps({
                "points":     new_pts,
                "status":     status,
                "batch_info": batch_info,
                "reset":      do_reset,
            })
            yield f"data: {payload}\n\n"
            time.sleep(0.1)

    return Response(
        generate(),
        mimetype="text/event-stream",
        headers={"Cache-Control": "no-cache", "X-Accel-Buffering": "no"},
    )


# ── Dashboard HTML ─────────────────────────────────────────────────────────────

_HTML = r"""<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<title>HIL Dashboard</title>
<script src="https://cdn.plot.ly/plotly-latest.min.js"></script>
<style>
*{box-sizing:border-box;margin:0;padding:0}
body{font-family:'Segoe UI',Arial,sans-serif;background:#12131a;color:#e2e2e2;padding:18px}
h1{color:#e94560;font-size:1.3rem;margin-bottom:14px;letter-spacing:.5px}
.row{display:flex;gap:14px;margin-bottom:14px;flex-wrap:wrap}
.card{background:#1c1f2e;border-radius:10px;padding:16px}

/* Controls column */
.ctrl{width:280px;flex-shrink:0;display:flex;flex-direction:column;gap:12px}
.section{background:#0d1117;border-radius:8px;padding:14px;border:1px solid #252636}
.section h3{font-size:.8rem;text-transform:uppercase;letter-spacing:.8px;
             color:#888;margin-bottom:10px}
.section label{display:block;font-size:.78rem;color:#777;margin-bottom:4px;margin-top:8px}
.section label:first-of-type{margin-top:0}
.section input{width:100%;padding:7px 10px;border-radius:5px;border:1px solid #333;
               background:#12131a;color:#e2e2e2;font-size:.9rem}
.section input:focus{outline:none;border-color:#e94560}
.btn{width:100%;margin-top:10px;padding:9px;border:none;border-radius:6px;
     font-size:.9rem;cursor:pointer;font-weight:600;transition:background .2s}
.btn-single{background:#4361ee;color:#fff}
.btn-single:hover:not(:disabled){background:#3451d1}
.btn-batch{background:#e94560;color:#fff}
.btn-batch:hover:not(:disabled){background:#c73550}
.btn:disabled{background:#2a2d3e;color:#555;cursor:not-allowed}

/* Progress bar */
.progress-wrap{margin-top:10px;display:none}
.progress-label{font-size:.75rem;color:#888;margin-bottom:4px}
.progress-bar-bg{background:#252636;border-radius:4px;height:6px;overflow:hidden}
.progress-bar-fill{background:#e94560;height:100%;width:0%;transition:width .4s;border-radius:4px}

/* Status */
.status-line{margin-top:8px;font-size:.78rem;color:#666}
.status-line span{font-weight:700;color:#e94560}

/* Signal displays */
.signals{flex:1;min-width:260px;display:grid;grid-template-columns:1fr 1fr;gap:10px}
.sig{background:#0d1117;border-radius:8px;padding:14px;text-align:center;
     border:1px solid #252636}
.sig .lbl{font-size:.7rem;color:#666;margin-bottom:6px;text-transform:uppercase;
           letter-spacing:.5px}
.sig .val{font-size:2rem;font-weight:700;line-height:1;margin-bottom:2px}
.sig .unit{font-size:.72rem;color:#555}
.id-col{color:#4cc9f0}.iq-col{color:#f72585}

/* Chart */
#chart{border-radius:10px;overflow:hidden}
</style>
</head>
<body>
<h1>HIL Dashboard — dq Current Controller</h1>

<div class="row">
  <!-- Left: controls -->
  <div class="ctrl">

    <!-- Single run -->
    <div class="section">
      <h3>Single Run</h3>
      <label>τ<sub>c</sub> (s)</label>
      <input id="tauSingle" type="number" value="0.001" min="0.0001" max="0.1" step="0.0001"
             placeholder="e.g. 0.001">
      <button class="btn btn-single" id="btnSingle" onclick="startSingle()">
        ▶  Start Single Run
      </button>
    </div>

    <!-- Batch sweep -->
    <div class="section">
      <h3>Batch Sweep</h3>
      <label>τ<sub>c</sub> values (comma-separated)</label>
      <input id="tauBatch" type="text" value="1e-3, 5e-3, 10e-3"
             placeholder="e.g. 1e-3, 5e-3, 10e-3">
      <button class="btn btn-batch" id="btnBatch" onclick="startBatch()">
        ▶  Run Batch Sweep
      </button>
      <div class="progress-wrap" id="progressWrap">
        <div class="progress-label" id="progressLabel">0 / 0</div>
        <div class="progress-bar-bg">
          <div class="progress-bar-fill" id="progressFill"></div>
        </div>
      </div>
    </div>

    <div class="status-line">Status: <span id="statusTxt">idle</span></div>
  </div>

  <!-- Right: signal displays -->
  <div class="card signals">
    <div class="sig">
      <div class="lbl">i<sub>d</sub> reference</div>
      <div class="val id-col" id="v_is_d_ref">0.00</div>
      <div class="unit">A</div>
    </div>
    <div class="sig">
      <div class="lbl">i<sub>d</sub> measured</div>
      <div class="val id-col" id="v_id">0.00</div>
      <div class="unit">A</div>
    </div>
    <div class="sig">
      <div class="lbl">i<sub>q</sub> reference</div>
      <div class="val iq-col" id="v_is_q_ref">0.00</div>
      <div class="unit">A</div>
    </div>
    <div class="sig">
      <div class="lbl">i<sub>q</sub> measured</div>
      <div class="val iq-col" id="v_iq">0.00</div>
      <div class="unit">A</div>
    </div>
  </div>
</div>

<!-- Live trend chart -->
<div class="card" style="padding:0">
  <div id="chart"></div>
</div>

<script>
const TRACES = [
  {key:'id',       name:'id measured', color:'#4cc9f0', dash:'solid',  width:2},
  {key:'iq',       name:'iq measured', color:'#f72585', dash:'solid',  width:2},
  {key:'is_d_ref', name:'id* ref',     color:'#4cc9f0', dash:'dash',   width:1.5},
  {key:'is_q_ref', name:'iq* ref',     color:'#f72585', dash:'dash',   width:1.5},
];
const layout = {
  paper_bgcolor:'#1c1f2e', plot_bgcolor:'#12131a',
  font:{color:'#ccc', size:12},
  xaxis:{title:'Simulation Time (s)', color:'#888', gridcolor:'#252636', zerolinecolor:'#333'},
  yaxis:{title:'Current (A)',          color:'#888', gridcolor:'#252636', zerolinecolor:'#333'},
  legend:{bgcolor:'#1c1f2e', bordercolor:'#333', borderwidth:1,
          x:0.01, y:0.99, xanchor:'left', yanchor:'top'},
  margin:{l:55, r:20, t:14, b:50},
  height:370,
};

function buildTraces() {
  return TRACES.map(tr => ({
    x:[], y:[], name:tr.name, mode:'lines', type:'scatter',
    line:{color:tr.color, dash:tr.dash, width:tr.width},
  }));
}
Plotly.newPlot('chart', buildTraces(), layout, {responsive:true, displayModeBar:false});

function resetChart() { Plotly.react('chart', buildTraces(), layout); }

function updateDisplays(p) {
  document.getElementById('v_is_d_ref').textContent = p.is_d_ref.toFixed(2);
  document.getElementById('v_id').textContent       = p.id.toFixed(2);
  document.getElementById('v_is_q_ref').textContent = p.is_q_ref.toFixed(2);
  document.getElementById('v_iq').textContent       = p.iq.toFixed(2);
}

function setBusy(busy) {
  document.getElementById('btnSingle').disabled = busy;
  document.getElementById('btnBatch').disabled  = busy;
}

function updateProgress(bi) {
  const wrap = document.getElementById('progressWrap');
  if (!bi) { wrap.style.display = 'none'; return; }
  wrap.style.display = 'block';
  const pct = Math.round((bi.current / bi.total) * 100);
  document.getElementById('progressLabel').textContent =
    `Run ${bi.current} / ${bi.total}  —  τc = ${bi.tau_c}`;
  document.getElementById('progressFill').style.width = pct + '%';
}

// SSE
let es = null;
function startSSE() {
  if (es) es.close();
  es = new EventSource('/stream');
  es.onmessage = function(e) {
    const msg = JSON.parse(e.data);

    document.getElementById('statusTxt').textContent = msg.status;
    setBusy(msg.status === 'running');
    updateProgress(msg.batch_info);

    if (msg.reset) resetChart();

    if (msg.points.length) {
      updateDisplays(msg.points[msg.points.length - 1]);
      const xB = TRACES.map(() => msg.points.map(p => p.t));
      const yB = TRACES.map(tr => msg.points.map(p => p[tr.key]));
      Plotly.extendTraces('chart', {x: xB, y: yB}, TRACES.map((_, i) => i));
    }
  };
  es.onerror = () => setTimeout(startSSE, 2000);
}

function parseTauValues(raw) {
  return raw.replace(/[\[\]\s]/g, '')
            .split(',')
            .map(s => parseFloat(s))
            .filter(v => !isNaN(v) && v > 0);
}

function startSingle() {
  const tau_c = parseFloat(document.getElementById('tauSingle').value);
  if (isNaN(tau_c) || tau_c <= 0) { alert('Enter a valid τc value'); return; }
  fetch('/start', {
    method:'POST', headers:{'Content-Type':'application/json'},
    body: JSON.stringify({tau_c})
  });
}

function startBatch() {
  const raw    = document.getElementById('tauBatch').value;
  const values = parseTauValues(raw);
  if (!values.length) { alert('Enter at least one valid τc value'); return; }
  fetch('/start_batch', {
    method:'POST', headers:{'Content-Type':'application/json'},
    body: JSON.stringify({tau_c_values: values})
  });
}

startSSE();
</script>
</body>
</html>
"""


# ── Server startup ─────────────────────────────────────────────────────────────

def start(host="127.0.0.1", port=5000):
    """Launch Flask in a background daemon thread. Returns the URL."""
    t = threading.Thread(
        target=lambda: app.run(host=host, port=port, debug=False, use_reloader=False),
        daemon=True,
    )
    t.start()
    url = f"http://{host}:{port}"
    print(f"Dashboard running at {url}")
    return url
