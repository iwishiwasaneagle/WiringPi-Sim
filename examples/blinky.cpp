#include <wiringPi.h>

#define LED_PIN 15

int main(void){
    wiringPiSetup();

    while(true){
        
        digitalWrite(LED_PIN,HIGH);

        delay(1000);

        digitalWrite(LED_PIN,LOW);

        delay(1000);
    
    }

    return 0;
}
