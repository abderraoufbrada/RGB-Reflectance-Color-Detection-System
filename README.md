# 🎨 ESP32 RGB Color Detection System

## 📌 Project Overview

This project implements a **color detection system** using an **ESP32 microcontroller**, **RGB LEDs**, and an **LDR (Light Dependent Resistor)** sensor.  

The system works by sequentially illuminating an object with Red, Green, and Blue LEDs, measuring the reflected light intensity with the LDR, and determining the color using a **calibrated interval-based dataset**.

The repository includes:
- Arduino IDE source code (.ino file)  
- Circuit schematic designed in EasyEDA  
- Simulation screenshots  
- Real hardware setup photos  
- 3D enclosure design in Fusion 360
---

## 🛠️ Technologies Used

- Microcontroller: ESP32-WROOM-32
- Programming Platform: Arduino IDE
- Circuit Design: EasyEDA
- 3D Design: Autodesk Fusion 360

---

## 🔌 Components Required

- ESP32 Development Board
- LEDs (red, blue , green )
- 3x 220Ω Resistors
- LDR (photoresistor)
- 10kΩ Resistor
- Breadboard
- Jumper Wires
- USB Cable

---

## ⚡ Circuit Connections

| Component | ESP32 Pin |
|-----------|-----------|
| Red LED   | GPIO 17   |
| Green LED | GPIO 21   |
| Blue LED  | GPIO 16   |
| LDR       | GPIO 32   |


---

## 💻 Arduino Source Code

The complete Arduino code is available in this repository:

📂 `YOUR_FILE_NAME.ino`

### How to Upload

1. Open the `.ino` file in Arduino IDE.
2. Select board → ESP32 Dev Module.
3. Select the correct COM port.
4. Click Upload.

---

## 📷 Project Images

### 🔹 Real Circuit Setup
![Real Circuit](photo_2026-02-17_09-28-51)

### 🔹 EasyEDA Schematic
![EasyEDA Schematic](Screenshot 2026-02-14 200129)

### 🔹 Fusion 360 Design
![Fusion 360 Design](Screenshot 2026-02-17 093553)
![Fusion 360 Design](Screenshot 2026-02-17 093518)
---

## 📂 Recommended Repository Structure

