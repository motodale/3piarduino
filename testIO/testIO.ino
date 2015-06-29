#include <OrangutanAnalog.h>
#include <OrangutanLCD.h>
#include <OrangutanMotors.h>
#include <avr/interrupt.h>


volatile int state = LOW;

OrangutanMotors motors;

int bat = OrangutanAnalog::readBatteryMillivolts();
int ch1 = 0;
int ch3 = 0;
int throttle = 7;
int steer = 19;

void setup() {
  pinMode(19, INPUT); //PC5 analog input 5
  pinMode(throttle, INPUT); //PD0 digital pin 0
  
  attachInterrupt(0, blink, CHANGE); 
//  Serial.begin(9600);
}

void loop() {
  digitalWrite(throttle, state);
}


void blink() {
  state = !state;
  
}  




//  OrangutanLCD::print("Battery");
//  OrangutanLCD::gotoXY(4,0);        
//  OrangutanLCD::print(bat);
//  OrangutanLCD::print("mV");

