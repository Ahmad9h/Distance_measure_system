#Distance Measurement System

## Overview
Welcome to  a project aimed at implementing a distance measurement system using the HC-SR04 ultrasonic sensor. This project is designed for the ATmega32 Microcontroller with a frequency of 16MHz. It adheres to a layered architecture model, leveraging a GPIO driver, an ICU driver, an LCD driver, and an Ultrasonic driver to measure and display distance on a connected LCD screen.

## System Requirements

### Hardware Requirements
To successfully implement this project, you will need the following hardware components:
- ATmega32 Microcontroller with a frequency of 16MHz.
- HC-SR04 Ultrasonic Sensor.
- 2x16 LCD.
- Appropriate connecting wires.
- A reliable power supply.

### Software Requirements
For the software side of the project, you should have access to:
- Eclips or a compatible integrated development environment (IDE).
- WinAVR or a similar toolchain for programming the ATmega32.
- Libraries and drivers mentioned in the project specifications.

## System Architecture

This project adheres to a layered architecture model and utilizes several drivers to ensure smooth operation:

### GPIO Driver
The GPIO driver facilitates control over the general-purpose input/output pins on the ATmega32. You can use the same GPIO driver that has been implemented in your course.

### ICU Driver
The ICU (Input Capture Unit) driver plays a crucial role in interfacing with the ATmega32's Input Capture peripheral. This driver is used to configure the ultrasonic sensor interface. Specifically, the ICU should be configured with a frequency of F_CPU/8 and set to detect the rising edge as the first edge. The ICU initialization and callback functions should be called inside the Ultrasonic initialization function.

### LCD Driver
The LCD driver is responsible for communicating with the 4x16 LCD. It's recommended to use the same LCD driver that has been implemented in your course, employing an 8-bits data mode. Connect the LCD control pins and data pins as per the project requirements:

### Ultrasonic Driver
The Ultrasonic driver is a custom driver created specifically for this project. It uses the ATmega32 ICU driver to interface with the HC-SR04 ultrasonic sensor. This driver offers several functions:

- void Ultrasonic_init(void): Initialize the ICU driver as required, set up the ICU callback function, and configure the trigger pin as an output pin using the GPIO driver.

- void Ultrasonic_Trigger(void): Send the trigger pulse to the ultrasonic sensor.

- uint16 Ultrasonic_readDistance(void): This function sends the trigger pulse and initiates measurements through the ICU. It returns the measured distance in centimeters.

- void Ultrasonic_edgeProcessing(void): This callback function is invoked by the ICU driver and is used to calculate the high time (pulse time) generated by the ultrasonic sensor.

## Project Hardware Connections

To ensure that the project works correctly, make sure to establish the following hardware connections:

- Ultrasonic Sensor:
  - VCC → +5V
  - Trig → Connect to the ATmega32 trigger pin
  - Echo → Connect to the ATmega32 Input Capture pin
  - GND → Ground

## software snap: ![image](https://github.com/Ahmad9h/Distance_measure_system/assets/146341346/d5aa470d-ef66-4bd8-a080-1dcc74cd6fbf)

## Thanks and Good Luck
