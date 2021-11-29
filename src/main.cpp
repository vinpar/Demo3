#include <Arduino.h>

/*
  Blinking LED project.
  Turns on an LED on for one second, then off for one second, repeatedly.
  Last Modification modified 30 March 2020
  by Roy Ben Avraham
 */

// the setup function runs once when you press reset or power the board
int n=0;
void setup() {
  // initialize digital pin 13 as an output.
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);              // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(500);              // wait for a second
Serial.println(sin(n*2*3.1416/20));
n++;
}