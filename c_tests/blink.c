#include <wiringPi.h>
int main (void)
{
  int pinNum = 23;
  wiringPiSetup () ;
  pinMode (pinNum, OUTPUT) ; // wiringPi pin 23 = GPIO pin 13
//  pinMode (0, OUTPUT) ; // wiringPi pin 0 = GPIO pin 17 
  for (;;)
  {
    digitalWrite (pinNum, HIGH) ; delay (500) ;
    digitalWrite (pinNum,  LOW) ; delay (500) ;
  }
  return 0 ;
}
