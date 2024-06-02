# Heart Rate Monitor Using Arduino

## Description

This project demonstrates how to build a basic heart rate monitor using an Arduino and an analog sensor. The setup involves reading analog values from a sensor, processing these values to detect heartbeats, and calculating the Beats Per Minute (BPM). The BPM is then displayed on the Serial Monitor. The project can be expanded to include more features like visual or audio feedback using LEDs or buzzers.

## Components Needed

- **Arduino UNO**: The microcontroller board used to read sensor values and process data.
- **Analog Heart Rate Sensor**: A sensor that detects heartbeats by measuring changes in resistance or voltage.
- **Breadboard**: For organizing and connecting components.
- **Jumper Wires**: For making connections between the Arduino and the sensor.
- **Buzzer (optional)**: For audio feedback indicating a heartbeat.
- **Resistors**: For adjusting sensor output if necessary.



## Instructions

### Connecting the Components

1. **Input Sensor to Controller:**
   - Insert the analog heart rate sensor into the breadboard.
   - Connect the sensor's VCC pin to the 5V pin on the Arduino.
   - Connect the sensor's GND pin to the GND pin on the Arduino.
   - Connect the sensor's output pin to the A0 pin on the Arduino.

2. **Microcontroller to Output Devices:**
   - (Optional) Connect one end of a jumper wire to the digital pin 8 on the Arduino and the other end to the positive terminal of the buzzer.
   - Connect the negative terminal of the buzzer to the GND pin on the Arduino.

### Power the Arduino

- Connect the Arduino to your computer using a USB cable.

### Upload the Code and Observe the Data

1. **Load the Program:**
   - Open the Arduino IDE on your computer.
   - Write or paste the provided program into the IDE.
   - Select the correct board and port in the Arduino IDE under the Tools menu.
   - Upload the program to the Arduino.

2. **Monitor the Output:**
   - Open the Serial Monitor in the Arduino IDE by selecting Tools > Serial Monitor.
   - Set the baud rate to 9600 in the Serial Monitor.
   - Observe the BPM values being printed on the Serial Monitor.

### Project Operation

- **Initialization:**
  - The Arduino initializes serial communication at 9600 baud.

- **Reading Sensor Values:**
  - The sensor continuously reads analog values from pin A0.
  - The code checks if the sensor values exceed a certain threshold to detect a heartbeat.
  - When a heartbeat is detected, it calculates the time interval between beats and converts it to BPM.
  - The BPM value is printed on the Serial Monitor.

- **Audio Feedback:**
  - If a heartbeat is detected, a tone is played on the buzzer (if connected).

### Applications

- **Health Monitoring:** Used in DIY health monitoring systems to track heart rate.
- **Fitness Tracking:** Incorporated into fitness devices to monitor heart rate during exercise.
- **Medical Research:** Used in prototypes for medical research and development.

## Support

For any issues or further assistance, please contact us:

- 🌐 [Projects Learner](https://projectslearner.com)
- 📧 Email: projectslearner@gmail.com
- 📸 Instagram
- 📘 Facebook
- ▶️ YouTube
- 📘 LinkedIn

Made for you with ❣️ from ProjectsLearner.