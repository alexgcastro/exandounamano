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

int sensorPin = 0;
int servoPin = 9;

int inputReading;
int sensorThreshold = 100;

Servo handServo;
// Servo position in degrees.
int position = 0;

void setup()
{
  // Init the servo output.
  pinMode(servoPin, OUTPUT);
  handServo.attach(servoPin);

  // Init sensor input.
  inputReading = 0;
  pinMode(sensorPin, INPUT);
}

void loop()
{
  // Read the input value.
  inputReading = analogRead(sensorPin);

  if (inputReading >= sensorThreshold) {
    if (position == 0)
      position = 180;
    else
      position = 0;

    handServo.write(position);

    // Wait for the servo to move.
    delay(1000);
  }

  delay(50);
}
