#include "eliuds_eggs.h"
#include <stdio.h>
#include <math.h>

int highest_power(int number);

int egg_count(int number){
    //int total = 0;
    int count = 0;
    //int sum = 0;

    while (number != 0){
        number -= pow(2,highest_power(number));
        // sum = number;
        // sum = sum - total;
        count++;
    }

    printf("number: %d\n", number);
    printf("count %d\n", count);
    return count;
}

int highest_power(int number){
    int i = 1;
    while (pow(2,i) <= number){
        i++;
    }
    if (pow(2,i) == number){
        return i;
    }
    else{
        return i-1;
    }
}

// int main(void){
//     int number = 2000000000;
//     egg_count(number);
//     return 0;
// }

