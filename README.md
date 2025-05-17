# SMART-LIGHT-CONTROL

*COMPANY*: CODTECH IT SOLUTIONS

*NAME*: N.SUHEAL AHAMED

*INTERN ID*: CT04DM815

*DOMAIN*: Internet Of Things

*DURATION*: 4 WEEKS

*MENTOR*: NEELA SANTOSH

💡 Task 1: Smart Light Control 
This IoT project demonstrates how to control an LED remotely using the Blynk IoT platform and an ESP32 microcontroller. It allows users to toggle the LED ON or OFF from a smartphone via the Blynk app.

📲 Overview
The ESP32 is connected to an LED on GPIO2. A virtual button in the Blynk app (assigned to Virtual Pin V0) sends a digital signal to control the LED. When the button is pressed, the ESP32 receives the command over Wi-Fi and turns the LED ON or OFF accordingly. The system also prints the LED status ("ON" or "OFF") to the Serial Monitor for debugging.

🧰 Components Used
 ✦ESP32 Dev Board

✦LED

✦220Ω Resistor

✦Blynk App (Template ID, Name, Auth Token)

✦Wokwi Simulator (for testing without hardware)


⚙️ Features
✔LED control via smartphone app

✔Real-time status updates in Serial Monitor

✔Reliable Wi-Fi-based communication

✔Simulatable on Wokwi for testing


🔌 Connections
LED anode → GPIO2 (through 220Ω resistor)

LED cathode → GND


📱 Blynk Configuration
➤Template Name: Smart Light Control Task 1

➤Virtual Pin Used: V0

➤Button Widget Mode: Switch (ON/OFF)


🖼️ Output Preview
★You can include the following in your GitHub repo:

★Circuit diagram (Wokwi screenshot)

★Blynk app screenshot with button

★LED ON/OFF images from simulation
