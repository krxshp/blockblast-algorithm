# blockblast-algorithm

A reproduction of the game Block Blast in an array of NeoPixel LEDs with a ESP32-S3. Features a handmade algorithm to play to the highest scores using my style of play. All of this is put into a 3D printed box.


## Hardware

* 1x ESP32-S3
* 64x Adafruit NeoPixels - I used the 60 LED per meter strip, but this can be changed according to sizing choice
* 1x Spliced 5V USBC cable
* 4x M2 x 20mm screws
* 2x M2 x 6mm screws
* 6x M2 threaded inserts
* Clear PLA
* Black PLA
* (Optional) Perfboard for wire management

## Software

* Arduino C++
* Adafruit NeoPixel library
* ESP32 WiFi + OTA support

## Features

* The project features highly modular code. This is to ensure that different algorithms can be tested based on personal playing style.
* To test if the algorithm has lost, there is a failure-detection algorithm.
* 3D-printable casing that can be scaled down or up according to the Neopixel density on the strip.

## Notes

* The LED coordinate mapping depends on the physical strip wiring direction. For shorter data wires, I have chosen to have each strip alternating direction, except for the last one. Ensure Dout connects to Din for the next strip in succession.
* The Clear PLA top part is printed with 100% infill, higher flow rate, and using rectilinear for all layers. This makes the translucent look.
* The Black PLA parts are optimized to avoid supports if printed on the flat side each time.
