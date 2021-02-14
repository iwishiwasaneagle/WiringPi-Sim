#include <wiringPi.h>
#include <iostream>

#define LED_PIN 15

int main(void){
    wiringPiSetup();

    for(int i=0;i<10;i++){
        
        digitalWrite(LED_PIN,HIGH);
        std::cout << "blink" << std::endl;

        delay(1000);

        digitalWrite(LED_PIN,LOW);
        std::cout << "blonk" << std::endl;

        delay(1000);
    
    }

    return 0;
}
