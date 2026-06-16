#include "perfect_numbers.h"
#include <stdbool.h>
#include <stdio.h>

int classify_number(int number){
    int i = 1;
    int sum = 0;

    while (i < number){
        if (number % i == 0){
            sum += i;
        }
        i++;
    }
    printf("Sum %d\n", sum);

    if (sum > number){
        return ABUNDANT_NUMBER;
    }
    else if(sum < number){
        return DEFICIENT_NUMBER;
    }
    else return PERFECT_NUMBER;
}

// int main(void){
//     int number = 12;
//     classify_number(number);
//     return 0;
// }