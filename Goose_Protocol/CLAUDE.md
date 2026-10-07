# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## What this folder is

Small experimental Python scripts for testing IEC 61850 GOOSE communication with Typhoon HIL hardware (HIL101) at layer 2. There is no package structure or dependency manifest. Comments, console output and `README.md` are in Spanish. `README.md` is a function-by-function guide to the code for the user, so keep it in sync when you change behavior, constants or function signatures.

| Folder | Contents |
|---|---|
| `test_python/` | The original single-value demo: `publisher_goose.py` sends one double, `subscriber_goose.py` decodes it, and `main.py` runs both. No tests. |
| `Typhoon_python/` | The subscriber for the real Typhoon setup, which receives **8 doubles**. It contains `subscriber_goose.py` and `hil_publisher.icd` (the SCL/ICD file that configures Typhoon's GOOSE publisher). |
| `Typhoon_python/test/` | `publisher_goose_8.py` (an 8-double publisher that stands in for the HIL), `test_subscriber_8.py` (offline unittest suite) and `main.py` (a live pub/sub run). |
| `Example_Typhoon/` | Typhoon vendor files (`goose.tse` model, `.cus` SCADA panel, `.scd`). They are opaque: edit them in Typhoon, not by hand. |

## Running

Dependency: `scapy` (`pip install scapy`). On Windows, Scapy also needs **Npcap**. On Linux it needs root. Run the terminal as administrator, or sending and sniffing will fail. The offline tests are the exception: they need neither.

```
# Typhoon_python (8 doubles)
python Typhoon_python/test/test_subscriber_8.py      # offline tests, no network/admin needed
python Typhoon_python/test/main.py --duracion 10     # live: subscriber + 8-double publisher
python Typhoon_python/subscriber_goose.py            # listen to the real HIL

# test_python (single double), run from test_python/
python main.py [--solo sub|pub] [--duracion 20] [--retardo 2]
```

pytest is not installed, so the tests use `unittest`.

## Architecture

- GOOSE frames use EtherType `0x88B8` sent to multicast MAC `01:0c:cd:01:00:01`. Scapy's GOOSE layer is not loaded, so the GOOSE header and PDU travel as a `Raw` payload that the scripts encode and decode by hand.
- **Encoding (publishers):** `build_goose()` builds an 8-byte header (`APPID`, `Length`, 2 reserved) and a BER-encoded goosePdu (`0x61`) with all the mandatory fields (gocbRef … allData). It uses the helpers `ber_tlv` (TLV with short or long length), `ber_uint` (minimal two's-complement unsigned), `ber_double` (MMS floating-point `0x0B` + IEEE-754 big-endian) and `utc_time` (8-byte UtcTime). stNum increments when the value changes, and sqNum counts the retransmissions and resets to 0 on each change. `publisher_goose_8.py`'s `build_goose(valores, st_num, sq_num, t_cambio, con_calidad=False)` takes a list of doubles. With `con_calidad=True` it puts a quality bit-string (`0x84`) after each double.
- **Decoding (subscribers):** `goose_callback()` uses the header `Length` to trim Ethernet padding. It splits TLVs one level at a time with `ber_items()` (called again for nested sequences), and converts `allData` elements with `decode_data()`, which handles boolean `0x83`, integer `0x85`, unsigned `0x86` and float32/float64 `0x87`.
- **`Typhoon_python/subscriber_goose.py` specifics:** from `allData` it keeps only floating-point (`0x87`) elements, so any quality or timestamp entries are skipped. It warns if the count isn't `NUM_VALORES` (8), prints each value under its label in `NOMBRES`, and stores them in place in the module-level list `ultimos_valores`. Extra values are dropped, and missing ones keep their previous value.
- **The ICD, the subscriber and the test publisher must stay aligned.** The 8 FCDAs of `ds_DoubleVal` in `hil_publisher.icd` (MMXU1: `PhV.phsA/B/C`, `A.phsA/B/C`, `TotW`, `TotVAr`) define the order of `NOMBRES` (`Va, Vb, Vc, Ia, Ib, Ic, P, Q`). If you change the dataset, update `NUM_VALORES`/`NOMBRES` in the subscriber and `VALORES_BASE`/`CONF_REV`/`GOCB_REF`/`DAT_SET` in `publisher_goose_8.py`. Also bump `confRev` in the ICD. `GOCB_REF` is built as `<iedName><ldInst>/LLN0$GO$<cbName>` (`HIL_IEDCTRL/LLN0$GO$GoCB_Double`). The ICD declares `lnType`s (`LLN0_Type`, `MMXU_Type`) but has no `DataTypeTemplates`.
- **Import vs. run:** in `Typhoon_python/`, both the subscriber and `publisher_goose_8.py` keep `sniff()` and the send loop under `if __name__ == "__main__":`, so the tests can import them. The tests feed `Ether(bytes(build_goose(...)))` straight into `goose_callback()` and capture stdout. The `test_python/` scripts still run their loops at import time, which is why both `main.py` launchers start each script as a separate **subprocess** (`sys.executable -u`). The launchers stop both scripts on Ctrl+C, when the timeout runs out, or when either child exits.
- Tag `0x87` means `simulation` inside the goosePdu and `floating-point` inside `allData`. Context matters when you parse.
- The network interface is **hardcoded** as the `INTERFACE` constant: `"Ethernet"` on Windows, `veth1` for publishers and `veth0` for subscribers on Linux, which assumes a veth pair. `publisher_goose_8.py` also accepts `--iface`. To list the available names, run `python -c "from scapy.all import show_interfaces; show_interfaces()"`.
