/*
 * This file is part of the wiringPi-sim library (https://github.com/iwishiwasaneagle/wiringPi-sim).
 * Copyright (c) 2021 Jan-Hendrik Ewers.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */


#include <wiringPi.h>
#include <iostream>

#define LED_PIN 15
#define DELAY 100

int main(void){
    wiringPiSetup();
    pinMode(LED_PIN, OUTPUT);

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
