#include "grains.h"
#include <stdio.h>

uint64_t square(uint8_t index){

    int i = 0;
    uint64_t grains = 1;
    while (i < (index-1)){
        grains *= 2;
        i++;
    }
    //printf("%d\n", grains);
    return grains;
}

uint64_t total(void){
    int i = 0;
    int idx = 1;
    u_int64_t total = 0;
    uint64_t sum = 0;

    while (i < 64){
        total += square(i);
        sum += total;
        printf("Index %d: %llu\n", idx, total);
        i++;
        idx++;
    }
    printf("Sum: %llu", sum);
    return total;
}



/*uint64_t total(void){
    uint64_t i = 1;
    uint64_t grains = 1;
    uint64_t total = 0;

    while (i <= 64){
        grains += i * 2;
        printf("%llu\n", grains);
        total += grains;
        i++;
        //printf("%llu\n", total);
    }
    printf("%llu", total);
    return total;
}*/

/*int main(void){
    total();
    return 0;
}*/
