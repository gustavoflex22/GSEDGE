#include <Servo.h>
#include <Arduino.h>


const int pinoJoyServo = A0;  


Servo servo1; 
const int servoPin = 9;

#define trig_pin 4
#define echo_pin 5
#define led 8
#define buzzer 2
int print_timer;

void setup()
{

pinMode(pinoJoyServo, INPUT);
servo1.attach(servoPin);

Serial.begin(9600);
pinMode(trig_pin, OUTPUT);
pinMode(echo_pin, INPUT);
pinMode(led, OUTPUT);
pinMode(buzzer, OUTPUT);
digitalWrite(trig_pin, LOW); 
}

void loop()
{

int angulo = analogRead(pinoJoyServo); 
angulo = map(angulo, 0, 1023, 0, 180); 
servo1.write(angulo); 
delay(15);


if(millis() - print_timer > 500)
{
print_timer = millis();
digitalWrite(trig_pin, HIGH);
delayMicroseconds(11); 
digitalWrite(trig_pin, LOW);


int pulse_time = pulseIn(echo_pin, HIGH);
double distance = 0.01715 * pulse_time;


Serial.print("Distancia: ");
Serial.print(distance);
Serial.println(" cm");


if(distance < 60 && distance > 45)
{
    digitalWrite(led, HIGH);
    noTone(buzzer);
}
else if(distance <= 45)
{
    digitalWrite(led, HIGH);  
    tone(buzzer, 450, 300);
}
else 
{
    digitalWrite(led, LOW);
    noTone(buzzer);
}}
}