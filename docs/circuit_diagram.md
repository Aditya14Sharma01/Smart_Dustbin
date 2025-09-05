# Circuit Diagram

## Smart Dustbin Circuit Connections

### Components Required:
- Arduino Uno/Nano
- HC-SR04 Ultrasonic Sensor
- SG90 Servo Motor
- Jumper wires
- Breadboard (optional)

### Pin Connections:

```
Arduino Uno/Nano    HC-SR04 Ultrasonic    SG90 Servo
─────────────────   ──────────────────   ───────────
Pin 9 (Digital)  →  Trig Pin
Pin 10 (Digital) →  Echo Pin
5V               →  VCC
GND              →  GND

Pin 6 (PWM)      →  Signal (Orange/Yellow wire)
5V               →  VCC (Red wire)
GND              →  GND (Brown/Black wire)
```

### Circuit Layout:

```
                    ┌─────────────────┐
                    │   Arduino Uno   │
                    │                 │
                    │  Pin 9 ─────────┼─── Trig (HC-SR04)
                    │  Pin 10 ────────┼─── Echo (HC-SR04)
                    │  Pin 6 ─────────┼─── Signal (Servo)
                    │  5V ────────────┼─── VCC (Both)
                    │  GND ───────────┼─── GND (Both)
                    └─────────────────┘
                           │
                    ┌──────┴──────┐
                    │             │
              ┌─────▼─────┐  ┌────▼────┐
              │ HC-SR04   │  │ SG90    │
              │ Ultrasonic│  │ Servo   │
              │ Sensor    │  │ Motor   │
              └───────────┘  └─────────┘
```

### Power Requirements:
- Arduino: 7-12V (via barrel jack) or 5V (via USB)
- HC-SR04: 5V, ~15mA
- SG90 Servo: 4.8-6V, ~1A (with load)

### Important Notes:
1. **Power Supply**: Ensure adequate power supply for servo motor
2. **Ground Connection**: All components must share common ground
3. **Servo Power**: For heavy loads, consider external power supply for servo
4. **Sensor Mounting**: Mount ultrasonic sensor at appropriate height and angle
5. **Wiring**: Use proper gauge wires for servo connections

### Troubleshooting:
- If servo doesn't move: Check power supply and connections
- If sensor readings are erratic: Check wiring and power supply
- If Arduino resets: Insufficient power supply for servo motor
