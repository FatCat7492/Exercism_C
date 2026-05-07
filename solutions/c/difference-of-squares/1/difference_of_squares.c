#include "difference_of_squares.h"
#include <stdio.h>


unsigned int sum_of_squares(unsigned int number){
    unsigned int i = 0;
    int sum = 0;

    while (i <= number){
        sum += i;
        i++;
    }
    sum = sum*sum;
    return sum;
}

unsigned int square_of_sum(unsigned int number){
    unsigned int i = 1;
    int sum = 0;
    int square = 0;

    while (i <= number){
        square = i * i;
        sum += square;
        i++;
    }
    return sum;
}

unsigned int difference_of_squares(unsigned int number){
    printf("%d", sum_of_squares(number) - square_of_sum(number));
    return sum_of_squares(number) - square_of_sum(number);
}

/*int main(void){
    int number = 10;

    difference_of_squares(number);
    return 0;
}*/

//unsigned int difference_of_squares(unsigned int number);
