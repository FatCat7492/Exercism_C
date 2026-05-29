#include "raindrops.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void convert(char result[], int drops){

    result = malloc(sizeof(char) * 15);

    if (drops % 3 == 0){
        strcat(result, "Plang");
    }
    if (drops % 5 == 0){
        strcat(result, "Plang");
    }
    if (drops % 7 == 0){
        strcat(result, "Plang");
    }
    else{
        sprintf(result, "%d", drops);
    }
}

int main(void){
    convert("", 35);
    return 0;
}
