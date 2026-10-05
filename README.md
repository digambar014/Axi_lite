# AXI4-Lite Slave RTL Design

A synthesizable **AXI4-Lite Slave Interface** designed from scratch using **Verilog HDL**.

This project implements the fundamental AXI4-Lite write and read transaction channels and demonstrates how a memory-mapped peripheral can communicate with an AXI-based processor or master.

## 📌 Features

- AXI4-Lite slave interface
- 32-bit data bus
- 32-bit address bus
- Independent read and write channels
- Write address channel (`AW`)
- Write data channel (`W`)
- Write response channel (`B`)
- Read address channel (`AR`)
- Read data channel (`R`)
- `VALID/READY` handshake implementation
- Memory-mapped register interface
- FSM-based transaction control
- Synthesizable Verilog RTL

## 🏗️ AXI4-Lite Architecture

```text
                    AXI4-Lite Master
                          │
        ┌─────────────────┼─────────────────┐
        │                 │                 │
        ▼                 ▼                 ▼
   Write Address      Write Data       Read Address
     AWADDR             WDATA             ARADDR
     AWVALID            WVALID            ARVALID
     AWREADY            WREADY            ARREADY
        │                 │                 │
        └─────────────────┼─────────────────┘
                          │
                    AXI4-Lite Slave
                          │
                    Register Bank
                          │
             ┌────────────┴────────────┐
             ▼                         ▼
        Write Response              Read Data
          BRESP                     RDATA
          BVALID                    RVALID
          BREADY                    RREADY
```

## 🔄 AXI4-Lite Handshake

AXI4-Lite uses a `VALID/READY` handshake mechanism.

A transfer occurs when:

```text
VALID = 1
READY = 1
```

The design independently handles the five AXI4-Lite channels:

| Channel | Purpose |
|---|---|
| AW | Write address |
| W | Write data |
| B | Write response |
| AR | Read address |
| R | Read data |

## ✍️ Write Transaction

A typical write transaction follows:

```text
Master                         Slave
  │                              │
  │──── AWADDR + AWVALID ──────>│
  │<──────── AWREADY ────────────│
  │                              │
  │──── WDATA + WVALID ────────>│
  │<──────── WREADY ─────────────│
  │                              │
  │<────── BVALID + BRESP ──────│
  │──────── BREADY ─────────────>│
  │                              │
```

The slave accepts the address and data independently and generates a write response after the register update is completed.

## 📖 Read Transaction

A typical read transaction follows:

```text
Master                         Slave
  │                              │
  │──── ARADDR + ARVALID ──────>│
  │<──────── ARREADY ────────────│
  │                              │
  │<──── RDATA + RVALID ────────│
  │──────── RREADY ─────────────>│
  │                              │
```

The slave decodes the requested address and returns the corresponding register data.

## 🧠 Register Map

Example register map:

| Address | Register | Access | Description |
|---:|---|---|---|
| `0x00` | `REG0` | RW | Control register |
| `0x04` | `REG1` | RW | Configuration register |
| `0x08` | `REG2` | RO | Status register |
| `0x0C` | `REG3` | RO | Data/status register |

The register map can be modified according to the peripheral application.

## 🔧 Internal Architecture

```text
                 AXI4-Lite Slave
                       │
        ┌──────────────┴──────────────┐
        │                             │
   Write Controller             Read Controller
        │                             │
        ▼                             ▼
   Address Decode               Address Decode
        │                             │
        └──────────────┬──────────────┘
                       │
                       ▼
                  Register Bank
```

## 🧩 Main RTL Components

| Module | Description |
|---|---|
| `axi_lite_slave` | Main AXI4-Lite slave interface |
| `register_bank` | Memory-mapped register storage |
| `axi_lite_tb` | RTL verification testbench |

> Modify these names to match the actual files in the repository.

## 🧪 Verification

The design is verified using RTL simulation.

The testbench verifies:

- Reset behavior
- AXI write transactions
- AXI read transactions
- `VALID/READY` handshaking
- Address decoding
- Register writes
- Register reads
- Write response generation
- Read response generation
- Multiple sequential transactions

### Simulation Example

Using Icarus Verilog:

```bash
iverilog -g2012 -o axi_lite_sim axi_lite_slave.v axi_lite_tb.v
vvp axi_lite_sim
```

Waveforms can be viewed using:

```bash
gtkwave dump.vcd
```

## 📊 Verification Flow

```text
RTL
 │
 ▼
Testbench
 │
 ▼
AXI Write Transaction
 │
 ▼
Register Update
 │
 ▼
AXI Read Transaction
 │
 ▼
Read Data Verification
 │
 ▼
Waveform Analysis
```

## 🛠️ Tools & Technologies

- **HDL:** Verilog
- **Protocol:** AXI4-Lite
- **Simulation:** Icarus Verilog
- **Waveform Viewer:** GTKWave
- **Design Level:** RTL
- **Target:** FPGA / ASIC

## 📂 Project Structure

```text
AXI4-Lite/
│
├── rtl/
│   └── axi_lite_slave.v
│
├── tb/
│   └── axi_lite_tb.v
│
├── sim/
│   └── dump.vcd
│
└── README.md
```

## 🎯 Learning Outcomes

This project provided practical experience with:

- AMBA AXI4-Lite protocol
- Memory-mapped interfaces
- `VALID/READY` handshaking
- FSM-based RTL design
- Address decoding
- Register interfaces
- Synchronous digital design
- RTL simulation and debugging
- Hardware protocol implementation

## 🚀 Future Improvements

Possible extensions include:

- AXI4-Lite master implementation
- Parameterized address/data width
- More configurable registers
- Interrupt support
- Integration with custom IP
- FPGA implementation
- Integration with a RISC-V SoC
- SystemVerilog Assertions (SVA)
- UVM-based protocol verification

## 👨‍💻 Author

**Digambar Singh**

Electronics & Communication Engineering | VLSI

Focused on **RTL Design, Design Verification, FPGA, ASIC Design and Physical Design**.
