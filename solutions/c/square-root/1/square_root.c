#include "square_root.h"
#include <stdio.h>

int square_root(int number){
    int i;
    int iterations;
    int squared;

    squared = 0;
    iterations = 0;
    i = 3;
    while (i * i != number){
        if (i * i < number){
            i += 7;
            squared = i * i;
            iterations++;
        }
        else if (i * i > number){
            i -= 3;
            squared = i * i;
            iterations++;
        }
    }
        printf("I is equal to %d\n", i);
        printf("%d iterations\n", iterations);
        return i;
}


// int main(void){
//     int number;

//     number = 65025;
//     square_root(number);
//     return 0;
// }
