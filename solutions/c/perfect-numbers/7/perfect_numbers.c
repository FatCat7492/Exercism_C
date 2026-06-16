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
    printf("Sum %d\n", sum);

    if (sum > number){
        printf("Something");
        return 2;
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