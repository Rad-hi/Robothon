# Robothon: The 24h long ***zero to hero*** robotics bootcamp

## What is Robothon?

**Robothon** by [**Electronix ENSTABC**](https://www.facebook.com/Club-Electronix-Enstab-225784444498231) is a **24h long** event held within the walls of [**ENSTA Borj Cedria (ENSTABC)**](http://www.enstab.rnu.tn/) as a fast-paced introduction to the world of robotics. 

During **Robothon**, the attendees go through a series of workshops (4-5) that cover all aspects of robotics, in a hands-on manner, and to make all what they learned stick, a competition between all attending teams is held for the last 5-6 hours of the event so that they can experience real life **collaborative problem-solving** when working towards a set goal.

**Robothon**, in bullet points:
- Registration opens and individuals book their places
- Teams are formed by the organizing team (randomly split)
- The day of the event, each team get their components that they'll use all along the event, and go through the workshops together
- After the last workshop, the specifications doc for the competition is presented to them, and it's **ON**, which'll then continue for the next 5-6 hours
- As the competition ends, all teams compete with their robots (and their newly acquired skills)
- Another successful **Robothon**, *CHECK*.

### Note

The content of this repo doesn't belong to me([Rad-hi](https://github.com/Rad-hi)) only, instead it's a cumulative effort by the good people of **Electronix ENSTABC**, who wanted an effective and efficient way to deliver knowledge, each year, to the new-comers of our school.

## First step

The first step in your journey with robotics is to install the [Arduino](https://www.arduino.cc/) [IDE](https://www.codecademy.com/articles/what-is-an-ide)(Integrated Development Environment) which is the **FREE & [open-source](https://en.wikipedia.org/wiki/Open_source)** tool that we'll use to create all kinds of impressive and cool stuff (mainly robots).

### So let's get you started!

Go to this website [https://www.arduino.cc/en/software](https://www.arduino.cc/en/software), and download the **Arduino IDE**.

Congrats! now you're all ready to tackle robothon's workshops!

### Parts list

*You can go through all workshops with only an Arduino board while "seeing" what it's doing through what it's a printing on the screen (serial monitor tool in the Arduino IDE), but that's not as fun as physically seeing your circuit in action, still you can pick just what you need for each workshop as you progress through this series.*

- *1x* Arduino development board, our choice is: [Arduino Uno](https://store.arduino.cc/products/arduino-uno-rev3/) (We listed the original, but since its desgin is open-source, there are cheaper clones), **WITH A USB A-B CABLE TO PROGRAM IT !**
- *1x* **Ultrasonic** sensor: [HC-SR04](https://www.sparkfun.com/products/15569), [***pictures***](https://www.ecosia.org/images/?q=HC+sr+04#f=null)
- *1x* [2 Wheels robot chassis Kit](https://www.amazon.com/perseids-Chassis-Encoder-Wheels-Battery/dp/B07DNYQ3PX), [***pictures***](https://www.ecosia.org/images?q=2%20wheel%20chassis%20robot%20amazon)
- *1x* [Motor driver](https://www.amazon.com/Qunqi-Controller-Module-Stepper-Arduino/dp/B014KMHSW6/ref=sr_1_3?keywords=l298n&qid=1637870134&sr=8-3), [***pictures***](https://www.ecosia.org/images?q=l298n)
- *1x* **Bluetooth** module: [HC-05](https://www.amazon.com/HiLetgo-Wireless-Bluetooth-Transceiver-Arduino/dp/B071YJG8DR/ref=sr_1_3?keywords=hc05&qid=1637870396&sr=8-3), [***pictures***](https://www.ecosia.org/images?q=hc05)
- *3x* [**Black & White IR** sensors](https://www.sparkfun.com/products/11769), [***pictures***](https://www.ecosia.org/images/?q=ir%20sensor%20for%20line%20following#)
- A couple of LEDs with the same number of Resistors (**200 to 1K Ohm**)
- A bunch of hook-up wires (male-female ones)
- Maybe a breadboard 

## Workshop 1 folder

*Requirements: An Arduino board, and an LED+Resistor*

The first hands-on workshop is meant to be an introduction to the Arduino development environment, Arduino community, Arduino [microcontrollers](https://en.wikipedia.org/wiki/Microcontroller), and Arduino's place in the embedded world.

The hello world for the embedded systems field is the **Blink** project, this is the first time you'll be controlling a physical LED with code. Once you go through it, you're an embedded engineer, or at least, a little bit closer to becoming one! 

(Well, what you did is huge! In fact, you wrote text on a computer that understood what you meant with that text and translated it into a bunch of instructions, which when run inside the other smaller computer (Arduino), will control it in a way that it(Arduino) would understand and control electrical signals in a way that would allow electrons to run through a [PN junction](https://en.wikipedia.org/wiki/P%E2%80%93n_junction)(LED) that's light emitting in nature, and result in you seeing visible light, and all this is being precisely timed ... see how fascinating what you just did was!?)

## Workshop 2 folder

*Requirements: An Arduino board, an H-Bridge (L298N), and at least a motor*

The second practical workshop is meant to be an introduction to actuators (mainly motors), and how can we control them. A big part of this workshop is talking about the theory of [H-bridges](https://en.wikipedia.org/wiki/H-bridge) and how they allow us to control motors to turn in any direction. Additionally, we'll discuss the difference between [speed and torque](http://lancet.mit.edu/motors/motors3.html) and its relation to current consumption. Furthermore, We'll control a motor (then two) with what we learned about Arduino and [H-bridges](https://en.wikipedia.org/wiki/H-bridge), and finally we'll talk about [Pusle Width Modulation (PWM)](https://en.wikipedia.org/wiki/Pulse-width_modulation) and we'll control the speed of the motor using what we learned about Arduino and [PWM](https://en.wikipedia.org/wiki/Pulse-width_modulation).

## Workshop 3 folder

*Requirements: An Arduino board, and at least one of the two sensors we mentioned (Ultrasonic and/or IR)*

So, we learned how to code Arduino boards, how to control motors (actuators) with Arduino code, and we can build a moving robot, **but** our robot won't be able to perceive anything about its environment ! 

For that, the third workshop covers [sensors](https://en.wikipedia.org/wiki/Sensor), what they are, how do they work, and where are they used. After a general discussion, we focus on **two types of sensors**, 

***1)*** [**active IR (InfraRed)** sensors](https://www.arrow.com/en/research-and-events/articles/understanding-active-and-passive-infrared-sensors) for line following robots (Black & White distinction through their natural difference in reflectivity), and how can we program simple line following robots, 

***2)*** [**Ultrasonic**](https://www.fierceelectronics.com/sensors/what-ultrasonic-sensor) sensors for distance measuring robots (obstacle avoidance).

## Workshop 4 folder

*Requirements: An Arduino board, Bluetooth transceiver, and a phone with a remote-car application*

We've come a long way, didn't we !? 

As we reach the fourth workshop, we look back and notice that we learned a great deal of information! What are embedded systems? How do they operate? What's Arduino? What's a microcontroller? What are sensors? ...

Now we can build robots that move around, make actions (actuate), preceive their environment and try to quantify its state in order to infere a decision, and behave autonomously overall. Now, we're gonna build an RC(remotely controlled) robot! So, in this workshop, we'll learn about [communication protocols](https://www.techopedia.com/definition/25705/communication-protocol), mainly the [serial communication protocol](https://www.serial-port-monitor.org/articles/serial-communication/types-of-serial-protocols/) and [Bluetooth](https://en.wikipedia.org/wiki/Bluetooth), and we'll build our own RC robot!

## What's next?

Congrats, you now have the knowledge, experience, and the required tools to build almost any hobbiest's project you might encounter on the internet or envision yourself.

For any additional information, visit [this website](https://www.google.com/), or [this website](https://www.youtube.com/).

Books suggestions:
- [Making Embedded Systems](https://www.oreilly.com/library/view/making-embedded-systems/9781449308889/)
- [Efficient C Code for Eight-Bit MCUs(**PDF**)](http://homepage.cem.itesm.mx/carbajal/Microcontrollers/ASSIGNMENTS/readings/ARTICLES/jones98_efficient_c_for_8bit_mcu.pdf), [Efficient C Code for Eight-Bit MCUs(**blog post**)](https://barrgroup.com/embedded-systems/how-to/efficient-c-code)
- [The Art of Electronics](https://artofelectronics.net/)
- [The ANSI C programming language](https://somedudesays.com/2020/02/a-review-of-the-kr-c-programming-language-book/)

Good luck with your embedded/robotics journey !