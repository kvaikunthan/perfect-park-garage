# Car parking assistant
This device powered by an Arduino UNO indicates to a driver pulling their car into their garage whether or not the car is at the optimal distance away from the wall. This is useful for those who end up parking their car too close or too far from the wall. 

**How does it work?**

It utilizes an ultrasound sensor which measures the distance from it and an object. This distance gets inputted into the Arduino which then turns the red LED on if the car is too close or too far, and then green if it is within the parameters. You can view a simulation of the device modeled on TinkerCAD [here](https://www.tinkercad.com/things/2toZZJSoFDk?sharecode=97M60Nq6YuQQrO4HUmyi_nO_-DMpVHXphq0bTZKNmiw).

**How does the device stay in place?**

I created a 3D-printable casing (which I was unable to print out since I do not own a 3D printer) modeled on TinkerCAD, which you can access [here](https://www.tinkercad.com/things/hJcChkxhXvL?sharecode=aITRjixAN7cQRPuH4G3GJycEr_EroiCctwMglTShr14).

**What do I need to build this?**

1. Arduino UNO - this will be the brain of the device, the code will be uploaded to it
2. Ultrasound sensor - this detects the distance between it and an object, it should have 4 pins: VCC for the 5V pin slot on the Arduino, GND for ground, TRIG pin to emit the ultrasonic pulse, and echo to relay the distance.
3. 2 LEDs - preferably green and red, as indicated on lines 12 and 13 of CarGarageSensor.ino
4. Resistors -
5. Breadboard (not needed if soldering) - this is an easy way to construct the circuit, as no soldering will be recquired
6. Connecting wires

To build, use the [circuit model](https://www.tinkercad.com/things/2toZZJSoFDk?sharecode=97M60Nq6YuQQrO4HUmyi_nO_-DMpVHXphq0bTZKNmiw) created on TinkerCAD as reference. Be sure to connect the pins to the correct slots entered into the code.

**How to upload code?**
Install the latest version of the Arduino IDE [here](https://www.arduino.cc/en/software). Follow the steps on the website on how to upload your code to the Arduino microcontroller.

**Images, for reference**

![image](https://github.com/kvaikunthan/perfect-park-garage/assets/66136428/a6dad2a3-9a15-4cd1-a206-7038c9fb647d)
