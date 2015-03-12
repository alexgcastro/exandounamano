/*
 * Copyright (C) 2015 Exando una mano
 * Authors: Alejando G. Castro <alex@igalia.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of version 3 of the GNU General Public
 * License as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>
 *
 */

#include <Servo.h>

int analogInputPin[6];

int inputReading[6];

Servo handServo;
// Servo position in degrees.
int position;

void setup()
{
   handServo.attach(10);

   position = 0;

   for (int i=0;i<6;i++) {
      analogInputPin[i] = i+1;
      inputReading[i] = 0;
      pinMode(analogInputPin[i], INPUT);
   }

   Serial.begin(9600);
}

void loop()
{
  for (int i=0;i<6;i++) {
    inputReading[i] = analogRead(analogInputPin[i]);
  }

  for (int i=0;i<1;i++) {
    if (inputReading[i] >= 400) {
       if (position == 0)
            position = 180;
       else
            position = 0;

       handServo.write(position);
       delay(1000);
    }
  }

  delay(100);
}
