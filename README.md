# iot task1

1. Include the necessary libraries:
   - `WiFi.h`: Provides the functionality to connect to a WiFi network.
   - `WiFiMulti.h`: Allows connecting to multiple WiFi networks simultaneously.

2. Define the network credentials:
   - Set the SSID (network name) and password for the WiFi networks you want to connect to.

3. Define the ESP32 pin connections:
   - Assign the GPIO pins on the ESP32 board to the corresponding LEDs and breadboard connections.

4. Set up the WiFi connection:
   - Create an instance of the `WiFiMulti` class.
   - Add the WiFi network credentials to the `WiFiMulti` instance.

5. Set up the LED pins as outputs:
   - Use the `pinMode()` function to configure the LED pins as outputs.

6. Enter the main loop:
   - The loop will execute continuously.

7. Check WiFi connectivity:
   - Use the `WiFiMulti.run()` function to handle WiFi connection and reconnection.

8. Make HTTP GET requests to different URLs:
   - Use the `WiFiClient` class to create a client object to send HTTP requests.
   - Use the `client.connect()` function to establish a connection with the server.
   - Use the `client.print()` function to send the HTTP GET request.
   - Use the `client.readStringUntil()` function to read the response from the server.

9. Process the server responses:
   - Compare the received response with specific strings to determine the action.
   - Turn on/off the LEDs based on the response received.

10. Print the response to the serial monitor:
    - Use the `Serial.begin()` function to initialize communication with the serial monitor.
    - Use the `Serial.println()` function to print the response received.

11. Add delays between requests:
    - Use the `delay()` function to introduce pauses between HTTP requests.

12. Repeat the loop:
    - The loop continues executing, repeating the steps indefinitely.

These steps enable the ESP32 board to connect to a WiFi network and make HTTP requests to specific URLs. The responses received determine the actions performed on the LEDs connected to the board.
__________________________________________________________________________________________________

TASK 2 
Connect the ultrasonic sensor and the LED:

Connect the ultrasonic sensor's trigPin to pin 9 of the Arduino.Certainly! Here are the simplified steps followed in the code:

1. Connect the ultrasonic sensor and LED:
    - Connect the `trigPin` of the ultrasonic sensor to pin 9 of the Arduino.
    - Connect the `echoPin` of the ultrasonic sensor to pin 10 of the Arduino.
    Connect an LED to pin 8 of the Arduino.

2. Declare variables:
    - `duration` will store the time it takes for the ultrasonic wave to travel.
    - `distance` will store the calculated distance based on the duration.

3. Set up the initial configuration:
    - Set pin 8 as an output to control the LED.
    - Set `trigPin` as an output to send signals to the ultrasonic sensor.
    - Set `echoPin` as an input to receive signals from the ultrasonic sensor.
    - Initialize the serial communication at a baud rate of 9600.

4. Enter the main loop:
    - Start an infinite loop that continuously executes the code inside.

5. Measure the distance using the ultrasonic sensor:
    - Send a short low signal to the `trigPin`.
    - Introduce a small delay.
    - Send a short high signal to the `trigPin`.
    - Introduce a short delay.
    - Send a low signal to the `trigPin`.
    - Measure the duration it takes for the echo signal to return using the `pulseIn()` function.
    - Calculate the distance using the measured duration.

6. Print the distance to the serial monitor:
    - Display the text "Distance: " using `Serial.print()`.
    - Display the calculated distance value using `Serial.println()`.

7. Control the LED based on the distance:
    - If the measured `distance` is less than or equal to 50 cm, turn on the LED.
    Otherwise, turn off the LED.

8. Repeat the loop:
    - The loop continues executing indefinitely, repeatedly measuring the distance and controlling the LED.

 the code's allowing the Arduino board to measure distance using an ultrasonic sensor and control an LED accordingly.



