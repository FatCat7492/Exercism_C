#include "collatz_conjecture.h"
#include <stdio.h>

int steps(int start);

/*int main(void){
    printf("Number of steps : %d\n", steps(0));
    return 0;
}*/

int steps(int start){
    if (start <= 0){
        return 0;
    }
    int count;

    count = 0;
    while (start != 1){
        if (start % 2 == 0){
            start /= 2;
            count++;
        }
        else if (start % 2 == 1)
        {
            start = 3 * start + 1;
            count++;
        }
    }
    return count;
}
