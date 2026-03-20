#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

int batteryPin = A0;

int greenLED = 8;
int yellowLED = 9;
int redLED = 10;

void setup() {

lcd.init();
lcd.backlight();

pinMode(greenLED, OUTPUT);
pinMode(yellowLED, OUTPUT);
pinMode(redLED, OUTPUT);

}

void loop() {

int value = analogRead(batteryPin);

float voltage = value * (5.0 / 1023.0);

lcd.setCursor(0,0);
lcd.print("Battery:");
lcd.print(voltage);
lcd.print("V");

lcd.setCursor(0,1);

if(voltage > 4)
{
lcd.print("Status:GOOD ");
digitalWrite(greenLED,HIGH);
digitalWrite(yellowLED,LOW);
digitalWrite(redLED,LOW);
}

else if(voltage > 3)
{
lcd.print("Status:MED  ");
digitalWrite(greenLED,LOW);
digitalWrite(yellowLED,HIGH);
digitalWrite(redLED,LOW);
}

else
{
lcd.print("Status:LOW  ");
digitalWrite(greenLED,LOW);
digitalWrite(yellowLED,LOW);
digitalWrite(redLED,HIGH);
}

delay(1000);

}