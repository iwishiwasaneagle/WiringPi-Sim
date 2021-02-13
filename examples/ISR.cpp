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

#include <stdio.h>
#include <wiringPi.h>

#define BUTTON_PIN 15

volatile long time = 0;

void interrupt(void){
    if((millis()-time)<100){return;}
    time = millis();

    int val = 0;
    for(int i=0;i<10;i++){
        val += digitalRead(BUTTON_PIN);
    }
    float mean = val/(float)10;
    if(mean>=0.5){
        printf("Button state: 1\n");
    }else{
        printf("Button state: 0\n"); 
    }
}

int main(void){

    wiringPiSetup();

    wiringPiISR(BUTTON_PIN, INT_EDGE_FALLING, &interrupt);

    long t = millis();
    while(1){
        printf("--> Main heartbeat at %ds \n", (t-millis())/1000);
        delay(1000);
    }
    return 0;
}
