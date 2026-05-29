#include "raindrops.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void convert(char result[], int drops){


    result = malloc(sizeof(char) * 150);

    if (drops % 3 == 0){
        result = strcat(result, "Plong");
    }
    if (drops % 5 == 0){
        result = strcat(result, "Plang");
    }
    if (drops % 7 == 0){
        result = strcat(result, "Plong");
    }
    else{
        sprintf(result, "%d", drops);
    }
    printf("%s", result);
}

int main(void){
    convert("", 34);
    return 0;
}
