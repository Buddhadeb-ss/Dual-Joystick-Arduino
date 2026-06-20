# 🎮 Arduino Dual Joystick PC Controller

A simple Arduino Uno project that converts two analog joystick modules into a PC-compatible game controller using the IBUS protocol and vJoySerialFeeder.

## Overview

This project uses two joystick modules connected to an Arduino Uno to generate six virtual control channels. The Arduino reads joystick movements, converts them into IBUS-compatible signals, and sends them over Serial to a computer. vJoySerialFeeder receives these signals and maps them to a virtual joystick, allowing the controller to be used in games and simulators.

## Features

* Dual analog joystick input
* Six-channel IBUS data generation
* Real-time serial communication
* Compatible with vJoySerialFeeder
* Smooth control with high refresh rate
* No additional microcontrollers required

## Components Used

* Arduino Uno
* 2 × Analog Joystick Modules
* Jumper Wires
* USB Cable
* PC with vJoy and vJoySerialFeeder installed

## System Working

Joystick Modules  
⬇️  
Arduino Uno  
⬇️  
IBUS Packet Generation  
⬇️  
USB Serial Communication  
⬇️  
vJoySerialFeeder  
⬇️  
Windows Virtual Joystick  
⬇️  
Game / Flight Simulator


## Channel Mapping

| Control  | Arduino Pin |
| -------- | ----------- |
| Roll     | A5          |
| Pitch    | A4          |
| Throttle | A2          |
| Yaw      | A3          |
| Aux 1    | Fixed       |
| Aux 2    | Fixed       |

## Applications

* Flight Simulators
* Drone Simulators
* RC Training
* Robotics Control
* Custom Gaming Controllers

## Software Used

* Arduino IDE
* vJoy Driver
* vJoySerialFeeder

## Future Improvements

* Push-button support
* Additional switches and AUX channels
* ESP32 wireless implementation
* Custom controller enclosure



📸 Project Preview

<img width="6000" height="4000" alt="DSC_0573" src="https://github.com/user-attachments/assets/4479a08a-13c9-4b84-9672-09f3946211a9" />

<img width="6000" height="4000" alt="DSC_0569" src="https://github.com/user-attachments/assets/e38490f1-d209-4545-bbc1-3b66e88fd39e" />


<img width="795" height="516" alt="image" src="https://github.com/user-attachments/assets/c7899706-10c0-437c-84aa-eb8fa5e6634a" />

<img width="1012" height="837" alt="image" src="https://github.com/user-attachments/assets/62a5a857-d171-49a3-87f7-b78114c6c49c" />

<img width="651" height="772" alt="Screenshot 2026-06-09 013550" src="https://github.com/user-attachments/assets/56db44a3-b290-4dba-b0a5-b163a0aeef88" />

