#include "space_age.h"
#include <stdint.h>
#include <stdio.h>

float age(planet_t planet, int64_t seconds){
    float years = seconds / 31557600;
    
    if (planet == MERCURY){
        return years / 0.2408467;
    }
    else if (planet == EARTH){
        return years;
    }
    else if (planet == VENUS){
        return years / 0.61519726;
    }
    else if (planet == MARS){
        return years / 1.8808158;
    }
    else if (planet == JUPITER){
        return years / 11.862615;
    }
    else if (planet == SATURN){
        return years / 29.447498;
    }
    else if (planet == URANUS){
        return years / 84.016846;
    }
    else if (planet == NEPTUNE){
        return years / 164.79132;
    }
    else{
        return -1;
    }
}

// int main(void){
//     printf("Result %f", age(MERCURY, 2134835688));
//     return 0;
// }

