/* ---------------------------- Welcome to the third workshop ---------------------------- */

Some things to keep in mind:

1) Don't ever wire the battery to your circuit before it gets checked!

2) Power up the Arduino board through the Vin pin (WHEN THE USB CABLE ISN'T PLUGGED). The Vin pin takes an input voltage from 6V to 12V.

3) The 5V and 3.3V pins of the Arduino board are OUTPUTS! Don't wire them to voltage sources.

4) VCC == 5V == + == RED WIRE     <==>   Positive terminal of the battery pack.

5) GND == 0V == - == BLACK WIRE   <==>   Negative terminal of the battery pack.

6) If you use pins 0 or 1, you need to unplug them before downloading code into the board, otherwise, the download will fail!

7) Any sensor must be powered up (VCC/GND). Additionally, its data pin(s) must be wired appropriately as the code states.

/* --------------------------------------- Have fun! -------------------------------------- */