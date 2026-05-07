#include "difference_of_squares.h"
#include <stdio.h>


unsigned int square_of_sum(unsigned int number){
    unsigned int i = 0;
    unsigned int sum = 0;

    while (i <= number){
        sum += i;
        i++;
    }
    sum = sum*sum;
    return sum;
}

unsigned int sum_of_squares(unsigned int number){
    unsigned int i = 1;
    unsigned int sum = 0;

    while (i <= number){
        sum += i * i;
        i++;
    }
    return sum;
}

unsigned int difference_of_squares(unsigned int number){
    return square_of_sum(number) - sum_of_squares(number);
}

/*int main(void){
    int number = 100;

    printf("%d", square_of_sum(number));
    return 0;
}*/

//unsigned int difference_of_squares(unsigned int number);
