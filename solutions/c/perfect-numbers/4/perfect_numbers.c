#include "perfect_numbers.h"
#include <stdbool.h>
#include <stdio.h>

bool classify_number(int number){
    int i = 1;
    int sum = 0;

    while (i < number){
        if (number % i == 0){
            sum += i;
        }
        i++;
    }
    if (sum > number){
        return ABUNDANT_NUMBER;
    }
    else if(sum < number){
        return DEFICIENT_NUMBER;
    }
    else return PERFECT_NUMBER;
}

// int main(void){
//     int number = 24;
//     is_perfect(number);
//     return 0;
// }