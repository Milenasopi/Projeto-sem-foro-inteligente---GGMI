#include <Ultrasonic.h>

Ultrasonic ultrasonic(26, 25);

#define LEDVERD1 18
#define LEDAMA1 19
#define LEDVERM1 21

#define LEDVERD2 13
#define LEDAMA2 12
#define LEDVERM2 14

//#define 26 2
//#define ECHO 4

void setup() 
{  
Serial.begin(9600);

pinMode(LEDVERD1, OUTPUT);
pinMode(LEDAMA1, OUTPUT);
pinMode(LEDVERM1, OUTPUT);

pinMode(LEDVERD2, OUTPUT);
pinMode(LEDAMA2, OUTPUT);
pinMode(LEDVERM2, OUTPUT);

}


void loop() 
{
 digitalWrite(LEDVERD2, LOW);
 digitalWrite(LEDVERM1, LOW);
 digitalWrite(LEDAMA1, LOW);
 digitalWrite(LEDAMA2, LOW);
 digitalWrite(LEDVERD1, HIGH);
 digitalWrite(LEDVERM2, HIGH);

delay(3000);

  int distance = ultrasonic.read();
Serial.println(distance);

//sensor na paralela
if(distance < 15){
digitalWrite(LEDVERD1, LOW);

digitalWrite(LEDAMA1, HIGH);
delay(3000);
 digitalWrite(LEDAMA1, LOW);
digitalWrite(LEDVERM2, LOW);
 digitalWrite(LEDVERM1, HIGH);
 digitalWrite(LEDVERD2, HIGH);
delay(3000);
 digitalWrite(LEDVERD2, LOW);
 digitalWrite(LEDAMA2, HIGH);
delay(3000);
}

}


