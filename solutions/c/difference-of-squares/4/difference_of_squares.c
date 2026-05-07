#include "difference_of_squares.h"
#include <stdio.h>


unsigned int sum_of_squares(unsigned int number){
    unsigned int i = 0;
    unsigned int sum = 0;

    while (i <= number){
        sum += i;
        i++;
    }
    sum = sum*sum;
    return sum;
}

unsigned int square_of_sum(unsigned int number){
    unsigned int i = 1;
    unsigned int sum = 0;

    while (i <= number){
        sum += i * i;
        i++;
    }
    return sum;
}

unsigned int difference_of_squares(unsigned int number){
    return sum_of_squares(number) - square_of_sum(number);
}

/*int main(void){
    int number = 10;

    difference_of_squares(number);
    return 0;
}*/

//unsigned int difference_of_squares(unsigned int number);
