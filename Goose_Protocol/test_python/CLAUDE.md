# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## What this folder is

Small experimental Python scripts for testing IEC 61850 GOOSE communication with Typhoon HIL hardware (HIL101) at layer 2. The publisher sends one double value inside a standards-conformant GOOSE frame, and the subscriber decodes it. These are standalone scripts with no package structure, tests, or dependency manifest. Comments, console output and `README.md` are in Spanish. `README.md` is a function-by-function guide to the code for the user, so keep it in sync when you change behavior or function signatures.

## Running

Dependency: `scapy` (`pip install scapy`). On Windows, Scapy also needs **Npcap**. On Linux it needs root. Run the terminal as administrator, or sending and sniffing will fail.

```
python main.py                 # starts the subscriber, then the publisher 1 s later
python main.py --solo sub      # subscriber only (or --solo pub)
python main.py --duracion 20   # auto-stop after 20 s
```

You can also run each script directly (`python subscriber_goose.py`, `python publisher_goose.py`).

There are no tests. To check the encoder and decoder without a network or admin rights, stub the `scapy.all` module, `exec` each script's source up to its first top-level `print(f"` (this leaves out the send loop and `sniff`), and pass `build_goose(...)`'s `Raw` load to `goose_callback`.

## Architecture

- `publisher_goose.py` and `subscriber_goose.py` run their main loop at import time: the publisher has a `while True` loop around `sendp`, and the subscriber blocks in `sniff`. For that reason, `main.py` starts each one as a separate **subprocess** (`sys.executable -u`) instead of importing it. It stops both processes on Ctrl+C, when the timeout runs out, or when either child exits. Keep that model unless the scripts are refactored to have a `main()` function.
- GOOSE frames use EtherType `0x88B8` sent to multicast MAC `01:0c:cd:01:00:01`. Scapy's GOOSE layer is not loaded, so the GOOSE header and PDU travel as a `Raw` payload that the scripts encode and decode by hand.
- **Publisher encoding:** `build_goose()` builds an 8-byte header (`APPID`, `Length`, 2 reserved) and a BER-encoded goosePdu (`0x61`) with all the mandatory fields (gocbRef … allData). It uses the helpers `ber_tlv` (TLV with short or long length), `ber_uint` (minimal two's-complement unsigned), `ber_double` (MMS floating-point `0x0B` + IEEE-754 big-endian) and `utc_time` (8-byte UtcTime). `allData` holds one floating-point (`0x87`) element, `VALOR`. stNum/sqNum follow GOOSE semantics: stNum increments when the value changes, and sqNum counts the retransmissions and resets to 0 on each change. The GoCB identifiers (`APPID`, `GOCB_REF`, `DAT_SET`, `GO_ID`, `CONF_REV`) are placeholders that must match the receiver's configuration.
- **Subscriber decoding:** `goose_callback()` uses the header `Length` to trim Ethernet padding. It splits TLVs one level at a time with `ber_items()` (called again for nested sequences), and converts `allData` elements with `decode_data()`, which handles boolean `0x83`, integer `0x85`, unsigned `0x86` and float32/float64 `0x87`. Any other type falls back to hex.
- Tag `0x87` means `simulation` inside the goosePdu and `floating-point` inside `allData`. Context matters when you parse.
- The network interface is **hardcoded in each script** as the `INTERFACE` constant: `"Ethernet"` on Windows, `veth1` (publisher) / `veth0` (subscriber) on Linux, which assumes a veth pair. If you change the interface, change it in both files. To list the available names, run `python -c "from scapy.all import show_interfaces; show_interfaces()"`.
