# ***Arduino for Servo Roll Making Machine**

## *Arduino and C++ Base:*

There are many ways to write and run embedded system programs, like writing your own code in languages like C, C++, Rust, or Using a framework like Arduino.

Arduino is an Open-source electronic prototyping platform enabling users to create interactive electronic objects.
Arduino code can be written in two flavours more popularly, C++ or MicroPython.

We're using Arduino and C++ to execute the said Arduino code. 

We can use standard C++ operators, classes, functions STL and more inside of our Arduino code(.ino files), and Ardiuno takes care of the main entry point, including, linking and compiling our code itself.

For our demo simulations, we are using Arduino Uno 3 board, A standard Servo motor, some wires, an RGB LED light, a Breadboard(size: mini), couple of resistors and finally wires to connect it all together.

### **Why C++?**
1. C++ was made to with one of the usecases as to be run on embedded systems in mind, while MicroPython and implimentation of Python for embedded systems programming was not.
2. C++ codes run faster than Python codes.
3. C++ code compilations more efficient.
4. C++ gives more flexibility and control in these use cases.

## *Details about the Demos:*
In both the demos, we have a couple of variable literals to define the Pin connections, a C++ style arduino specific object for the Servo motor that we have included, an arduino specific function called "setup", that is used to define the setup and connections of our Arduino with its various connected components, an arduino specific function called "loop", that defines what happens when we run our Arduino program, an RGB LED specific Arduino function called "RGB_color" that takes in 3 C++ style integers for how much RED, GREEN, and BLUE we want in our RGB output, and converts them into 8-BIT RGB stream and sends out a corresponding Analog signal, and as a result the RGB light glows in the corresponding color, Servo specific "write" functions to change the arduino position, and the Arduino specific "delay" function to delay the following command by the time given in milliseconds.

## *What's happening in the Demo 1:*
In the Demo 1, we rotate angle through different angles in very quick successions, with small delays in between, and after each rotation we change the color of the RGB Light, the program starts and terminates with RGB light turning white and the motor shaft returning to it's initial angle of 0 degree.

## *What's happening in the Demo 1:*
In the Demo 2, we rotate angle through different angles in successions of 1 degree angle most of the times, and after some random angle, we do a rapid rotation to some standard angle and then we again do rotations of 1 degree, with small delays in between, and after each rotation we change the color of the RGB Light, the program starts and terminates with RGB light turning white and the motor shaft returning to it's initial angle of 0 degree as well.

### **Note:**
- We do some delays in between intentionally because otherwise the programs would run way too fast to notice anything at all.
- After each rotation, the color in the LED is random, tho it might be hard to notice if the display used does not support a wide color gammut.
- Starting and termination of the program however has the same color, ie white. 
- The same work can be easily done in MicroPython, and the code would be easier to write and shorter, and in a small demo like this the difference is neglidgible but in bigger projects, the difference is notable enough, and as for the reasons stated above, we use C++ flavour of Arduino here.