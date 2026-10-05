# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## What this folder is

Small experimental Python scripts for testing industrial Ethernet communication (IEC 61850 GOOSE and PROFINET) with Typhoon HIL hardware (HIL101) at layer 2. These are standalone scripts with no package structure, tests, or dependency manifest. Comments and console output are in Spanish.

## Running

Dependency: `scapy` (`pip install scapy`). On Windows, Scapy also needs **Npcap**. On Linux it needs root. Run the terminal as administrator, or sending and sniffing will fail.

```
python main.py                 # starts the subscriber, then the publisher 1 s later
python main.py --solo sub      # subscriber only (or --solo pub)
python main.py --duracion 20   # auto-stop after 20 s
```

You can also run each script directly (`python subscriber_goose.py`, `python publisher_goose.py`).

## Architecture

- `publisher_goose.py` and `subscriber_goose.py` run their main loop at import time: the publisher has a `while True` loop around `sendp`, and the subscriber blocks in `sniff`. They have no functions to call. For that reason, `main.py` starts each one as a separate **subprocess** (`sys.executable -u`) instead of importing it. It stops both processes on Ctrl+C, when the timeout runs out, or when either child exits. Keep that model unless the scripts are refactored to have a `main()` function.
- GOOSE frames use EtherType `0x88B8` sent to multicast MAC `01:0c:cd:01:00:01`. The publisher's payload is a **fake** BER blob, not a valid GOOSE PDU (no gocbRef/stNum/sqNum encoding). The `stNum` it prints is only a local counter.
- The network interface is **hardcoded in each script** as the `INTERFACE` constant: `"Ethernet"` on Windows, `veth1` (publisher) / `veth0` (subscriber) on Linux, which assumes a veth pair. If you change the interface, change it in both files. To list the available names, run `python -c "from scapy.all import show_interfaces; show_interfaces()"`.
- `Scapy_goose.py` is an older standalone sniffer that is hardcoded to `eth0`.
- `profinet.py` is a sketch of a PROFINET DCP scan plus cyclic I/O against a HIL101 that uses a GSDML file. Two problems: it does `import profinet` while it is itself named `profinet.py`, so the import resolves to the script itself and does not work as written. Also, the referenced `GSDML-V2.3-TyphoonHIL-HIL101.xml` is not in the folder.
