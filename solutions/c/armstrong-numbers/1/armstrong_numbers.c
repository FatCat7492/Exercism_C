#include "armstrong_numbers.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

bool is_armstrong_number(int candidate){
    int count = 0;
    int number_copy = candidate;
    int digit = 0;
    int sum = 0;

    while (number_copy > 0){
        number_copy /= 10;
        count++;
    }

    number_copy = candidate;
    while (number_copy > 0){
        digit = number_copy % 10;
        //printf("Digits: %d\n", digit);
        number_copy /= 10;
        sum += pow(digit, count);
        //printf("SUM: %d\n", sum);
    }

    if (sum == candidate){
        //printf("YES");
        return true;
    }
    else{
        //printf("NOPE");
        return false;
    }
}

int main(void){
    int candidate = 154;
    is_armstrong_number(candidate);
    return 0;
}
