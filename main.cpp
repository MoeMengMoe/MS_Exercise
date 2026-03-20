#include "mbed.h"
BusOut display(D2,D3,D4,D5,D6,D9,D10,D11);
	//segments A,B,C,D,E,F,G,DP


enum SegmentDigit {
    Digit_0 = 0x3F, // 0011 1111 (a,b,c,d,e,f 亮)
    Digit_1 = 0x06, // 0000 0110 (b,c 亮)
    Digit_2 = 0x5B, // 0101 1011
    Digit_3 = 0x4F, // 0100 1111
    Digit_4 = 0x66, // 0110 0110
    Digit_5 = 0x6D, // 0110 1101
    Digit_6 = 0x7D, // 0111 1101
    Digit_7 = 0x07, // 0000 0111
    Digit_8 = 0x7F, // 0111 1111 (全亮，不含dp)
    Digit_9 = 0x6F, // 0110 1111
    Digit_DP = 0x80, // 1000 0000 (仅小数点)
    Digit_h = 0x76,
    Digit_e = 0x79,
    Digit_l = 0x38,
    Digit_p = 0x73
};
int main () {
while(1) {
for (int i=0; i<=9;i++){ 
switch(i){
    case 0:
    display=Digit_0;
    break;
    case 1:
    display=Digit_1;
    break;
    case 2:
    display=Digit_2;
    break;
    case 3:
    display=Digit_3;
    break;
    case 4:
    display=Digit_4;
    break;
    case 5:
    display=Digit_5;
    break;
    case 6:
    display=Digit_6;
    break;
    case 7:
    display=Digit_7;
    break;
    case 8:
    display=Digit_8;
    break;
    case 9:
    display=Digit_9;
    ThisThread::sleep_for(500ms);
    display=Digit_h;
    ThisThread::sleep_for(500ms);
    display=Digit_e;
    ThisThread::sleep_for(500ms);
    display=Digit_l;
    ThisThread::sleep_for(500ms);
    display=Digit_p;
    break;



}	//end of switch
ThisThread::sleep_for(500ms);	//display value for 0.5s
		}	//end	of	for
	}		//end	of	while
}			//end	of	main
