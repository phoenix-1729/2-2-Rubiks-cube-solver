#include <Servo.h>
int ledPin =13;

Servo rotatePin ;
Servo pushPin ;

void setup()
{
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);
  rotatePin.attach(9);
  pushPin.attach(6);
}

void rotate()
{
  
}

void push1()
{

}

void push2()
{

}

void Front()
{

}

void Fronti()
{

}

void Left()
{

}

void Lefti()
{

}

void Upper()
{

}

void Upperi()
{

}

void loop()
{
  if(Serial.available() > 0)
  {
    String info;
    info=Serial.readStringUntil('\n');
    if(info.equals("ON"))
    {
     digitalWrite(ledPin,HIGH);
     Serial.println("LED is ON"); 
    }
    else if(info.equals("OFF"))
   {
     digitalWrite(ledPin,LOW);
     Serial.println("LED is OFF"); 
    }
   }
}
   
