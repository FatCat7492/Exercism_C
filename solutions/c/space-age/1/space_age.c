#include "space_age.h"
#include <stdint.h>
#include <stdio.h>

float age(planet_t planet, int64_t seconds){
    float years = seconds / 31557600;
    
    if (planet == 1){
        return years * 0.2408467;
    }
    else if (planet == 2){
        return years * 0.61519726;
    }
    else if (planet == 4){
        return years * 1.8808158;
    }
    else if (planet == 5){
        return years * 11.862615;
    }
    else if (planet == 6){
        return years * 29.447498;
    }
    else if (planet == 7){
        return years * 84.016846;
    }
    else if (planet == 8){
        return years * 164.79132;
    }
    else{
        return years;
    }
}

// int main(void){
//     printf("Result %f", age(1, 100000000));
//     return 0;
// }

