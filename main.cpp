#include "mbed.h"

AnalogOut dac_out(A4);   


int main() {
    int steps = 500;                 
    float vmax=3.0f/3.3f;
    
           

    while (true) {
        for(int i=1;i<=steps;i++){
            float output=vmax*(((float)i-1.0f)/(steps-1));
            dac_out.write(output);
            wait_us(8);
        }
    }
}