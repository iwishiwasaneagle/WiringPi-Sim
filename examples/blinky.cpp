#include <wiringPi.h>
#include <iostream>

#define LED_PIN 15
#define DELAY 100

int main(void){
    wiringPiSetup();

    for(int i=0;i<10;i++){
        
        digitalWrite(LED_PIN,HIGH);
        std::cout << "Blinky: bl1nk" << std::endl;

        delay(DELAY);

        digitalWrite(LED_PIN,LOW);
        std::cout << "Blinky: bl0nk" << std::endl;

        delay(DELAY);
    
    }

    return 0;
}
