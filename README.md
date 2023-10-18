# Distance_measure_system
- Powered by the robust ATmega32 Microcontroller running at 8MHz for precision (16MHZ for real time).
- Utilizes the acclaimed HC-SR04 Ultrasonic Sensor, guaranteeing accurate results.
- Real-time distance display via a 2x16 LCD for user convenience.
- We've adopted a layered architecture model, incorporating HAL and MCAL for scalability and maintainability.

📎 *Layered Model:* 📎
- Our project integrates HAL for hardware abstraction, allowing seamless component upgrades without disrupting core functionality, for example: LCD, Ultrasonic and Output unit Drivers.
- MCAL manages low-level microcontroller interactions, ensuring system efficiency and reliability.

📎 *Driver Integration:* 📎
- We utilized familiar GPIO, ICU, and LCD drivers from our training.
- The ICU driver is expertly configured for precision and accuracy.
- The Ultrasonic driver features key functions for seamless measurement.

### software snap:
![image](https://github.com/Ahmad9h/Distance_measure_system/assets/146341346/d5aa470d-ef66-4bd8-a080-1dcc74cd6fbf)
