# 🔋 Smart Battery Monitoring System using Arduino

## 📌 Overview

This project is an Arduino-based system that measures battery voltage and displays it on an I2C LCD. It also indicates battery health using LEDs.

## ⚙️ Components Used

* Arduino UNO
* I2C LCD (16x2)
* LR44 Coin Cell Batteries (1.5V each)
* LEDs (Green, Yellow, Red)
* Breadboard
* Jumper Wires

## 🔧 Working Principle

The Arduino reads the battery voltage through analog pin A0 using its built-in ADC (10-bit resolution). The analog value is converted into voltage and displayed on the LCD.

Based on the voltage level:

* Green LED → Good battery
* Yellow LED → Medium
* Red LED → Low

## 📊 Output Example

Battery: 3.00V
Status: GOOD

## 🧠 Key Concepts Learned

* Analog-to-Digital Conversion (ADC)
* I2C Communication Protocol
* Embedded System Design
* Voltage Measurement

## 🚀 Future Improvements

* Add battery percentage display
* Improve accuracy using voltage divider
* Add buzzer alert for low battery

## 📷 Project Demo
<img width="1600" height="900" alt="image" src="https://github.com/user-attachments/assets/2d395d23-b4c7-485e-8765-1c1de6fe3eae" />
<img width="1600" height="900" alt="image" src="https://github.com/user-attachments/assets/87e9fc8b-baed-46e9-8dc3-1f162265af5a" />
