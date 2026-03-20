#include "mbed.h"

using namespace ThisThread;


DigitalOut A(D4); 
DigitalOut B(D5);           
          
PwmOut PWM(D9);               

int main()
{
    A=0;
    B=0;
    
    
  

    while (1) {
        A=0;B=0;
        sleep_for(100ms);
        A=!A;
        sleep_for(100ms);
        A=!A;B=!B;
        sleep_for(100ms);
        A=1;B=1;
        sleep_for(100ms);
        
        
        
      
    }
}