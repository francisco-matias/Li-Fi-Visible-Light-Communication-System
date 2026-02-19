# Li-Fi-Visible-Light-Communication-System
Optical Wireless Communication Prototype

# Overview
This project presents the design and experimental validation of a Li-Fi (Light Fidelity) prototype based on Visible Light Communication (VLC). The system transmits digital data through intensity modulation of an LED source and recovers the signal using photodiode detection, enabling short-range optical wireless communication under laboratory conditions. The objective was to evaluate modulation strategies, hardware constraints, synchronization challenges and performance limitations in practical optical data transmission.

# System Architecture

# Transmitter
  - Arduino Leonardo
  - High-intensity LED source
  - BC341 NPN transistor switching stage
  - Current limiting circuitry

# Receiver
  - Thorlabs DET10A2 photodiode
  - Oscilloscope-based signal acquisition

# Implemented Modulation Schemes

- Pulse Width Modulation (PWM)
- Pulse Position Modulation (PPM)
- Pulse Code Modulation (PCM)

Each scheme was implemented and experimentally benchmarked in terms of:

- Timing precision
- Noise immunity
- Synchronization complexity
- Signal detectability
- Data rate degradation at reduced pulse intervals

# Report

Full technical documentation available here:

[visible-optical-communications.pdf](https://raw.githubusercontent.com/francisco-matias/Li-Fi-Visible-Light-Communication-System/9a4400d13eb55a7f9b5d8b741d96a1449778386e/Visible%20Optical%20Communications.pdf)
