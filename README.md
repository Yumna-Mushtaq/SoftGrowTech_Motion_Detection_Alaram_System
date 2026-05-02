Motion Detection Alarm System 🚨

📌 Project Overview

This project  demonstrates a smart security solution using an Arduino Uno and a PIR (Passive Infrared) Sensor. The system is designed to monitor a specific area and trigger an immediate visual (LED) and auditory (Buzzer) alert when motion is detected

🛠️ Hardware Components

Microcontroller: Arduino Uno  

Sensor: PIR Motion Sensor  

Visual Output: Red LED  

Audio Output: Piezo Buzzer  

Protection: 220Ω Resistor  

Miscellaneous: Breadboard and Jumper Wires

🔌 Circuit Connections

Based on the simulation design, the components are wired as follows:  

| Component         | Arduino Pin | Role                  |
| ----------------- | ----------- | --------------------- |
| **PIR VCC**       | 5V          | Power Supply          |
| **PIR GND**       | GND         | Ground                |
| **PIR Signal**    | Pin 2       | Input                 |
| **Buzzer (+)**    | Pin 13      | Output                |
| **LED Anode (+)** | Pin 13      | Output (via Resistor) |
| **Common GND**    | GND         | Ground                |

🚀 Features

Real-time Detection: High-sensitivity motion tracking.  

Serial Feedback: Live updates on the Serial Monitor.  

Synchronized Alert: LED and Buzzer trigger at the exact same moment for maximum impact



