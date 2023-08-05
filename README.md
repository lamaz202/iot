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
