# Exando una mano - Control robotic hand using myoelectric sensors

This is the software part of the Exando una mano project, you can find
more information about the mission of the project in its webpage:

http://exandounamano.com/

The initial code processes a signal from the myoelectric sensor
(Muscle Sensor v3 from Advancer Technologies) and controls one servo
connected to a 3D printed hand.

### Dependencies

You don't need anything special to build and run this other than the
arduino SDK.

To install it on Fedora, simply do:

    $ sudo yum install arduino

For other operating systems: http://arduino.cc/en/Main/Software

### How to build and install

To build this code you might need to adapt the Makefile provided to
match the arduino board you have, the serial port used in your system,
as well as the place where the Arduino.mk
(https://github.com/sudar/Arduino-Makefile) file is located, I've used
a fedora package.

Once you have that sorted out, building the code and uploading it to
the Arduino board doing:

    $ make
    $ make upload

### License

exandounamano is Copyright (c) 2015 Exando una mano association and is
Free Software: you can redistribute it and/or modify it under the
terms of the GNU General Public License version 3 as published by the
Free Software Foundation.

exandounamano is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

See the COPYING file for more details.
