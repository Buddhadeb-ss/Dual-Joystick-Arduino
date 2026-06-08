# Dual-Joystick-Arduino

🎮 Dual Joystick Interface with Arduino Uno

A simple Arduino project that demonstrates interfacing two analog joystick modules with an Arduino Uno. This setup can be used as the foundation for robotics control, RC vehicles, game controllers, IoT interfaces, and custom human-machine interaction projects.

📸 Project Preview

<img width="6000" height="4000" alt="DSC_0573" src="https://github.com/user-attachments/assets/4479a08a-13c9-4b84-9672-09f3946211a9" />

<img width="6000" height="4000" alt="DSC_0569" src="https://github.com/user-attachments/assets/e38490f1-d209-4545-bbc1-3b66e88fd39e" />


<img width="795" height="516" alt="image" src="https://github.com/user-attachments/assets/c7899706-10c0-437c-84aa-eb8fa5e6634a" />



🚀 Features
Reads input from two joystick modules
Supports X and Y axis analog movement
Detects joystick button presses
Real-time serial monitoring
Expandable for robotics and wireless control projects
Beginner-friendly hardware setup
🛠 Components Used
Component	Quantity
Arduino Uno	1
Joystick Module	2
Jumper Wires	Several
USB Cable	1
Computer with Arduino IDE	1
🔌 Wiring Overview
Joystick 1
Joystick Pin	Arduino Pin
VCC	5V
GND	GND
VRX	A0
VRY	A1
SW	D2
Joystick 2
Joystick Pin	Arduino Pin
VCC	5V
GND	GND
VRX	A2
VRY	A3
SW	D3

Adjust the pin numbers if your code uses different connections.
Software requirement for the working is the vjoy serial feeder.
download and setup accordingly
📊 How It Works

Each joystick contains:

Two potentiometers for X and Y movement
One push-button switch

The Arduino continuously reads the analog values from both joysticks and processes them through the ADC (Analog-to-Digital Converter). These values can then be used for:

Robot navigation
Drone controls
Menu navigation
Servo control
Custom gaming controllers
💻 Example Output
Joystick 1 -> X: 512 Y: 520
Joystick 2 -> X: 498 Y: 510

Button 1: Released
Button 2: Pressed
🎯 Future Improvements
Control a robotic car
Wireless communication using HC-05 Bluetooth
ESP32 integration
OLED display feedback
Servo motor control
PC game controller emulation
IoT dashboard integration
📚 What I Learned
Analog signal reading using Arduino
Joystick interfacing
Serial communication
Hardware debugging
Basic embedded systems development
🤝 Contributing

Feel free to fork the repository, experiment with the project, and submit improvements.
