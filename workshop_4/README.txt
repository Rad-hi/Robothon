/* ---------------------------- Welcome to the fourth workshop ---------------------------- */

Some things to keep in mind:

1) Don't ever wire the battery to your circuit before it gets checked!

2) Power up the Arduino board through the Vin pin (WHEN THE USB CABLE ISN'T PLUGGED). The Vin pin takes an input voltage from 6V to 12V.

3) The 5V and 3.3V pins of the Arduino board are OUTPUTS! Don't wire them to voltage sources.

4) VCC == 5V == + == RED WIRE     <==>   Positive terminal of the battery pack.

5) GND == 0V == - == BLACK WIRE   <==>   Negative terminal of the battery pack.

6) If you use pins 0 or 1, you need to unplug them before downloading code into the board, otherwise, the download will fail!

7) The Bluetooth module must be powered up (VCC/GND). Additionally, its Tx and Rx pins must be wired appropriately to the Arduino board as the code states (Bluetooth_Tx <-> Arduino_Rx, Bluetooth_Rx <-> Arduino_Tx). 

8) The DEBUG_MACRO presented in this code is meant to not be included in the final code! You'll want to comment the line --> #define DEBUG_ENABLE <-- before pushing your final code into the robot! (this will make your code run faster).

9) I recommend not trying to understand that code for now, but if you want to understand it, here's a good place to start: https://www.educba.com/macros-in-c/ 

/* --------------------------------------- Have fun! -------------------------------------- */