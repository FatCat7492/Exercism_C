#include "raindrops.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void convert(char result[], int drops){

    result = malloc(100 * sizeof(char));

    if (!((drops % 3 == 0) || (drops % 5 == 0) || (drops % 7 == 0))){
        sprintf(result, "%d", drops);
    }
    if (drops % 3 == 0){
        result = strcat(result, "Pling");
    }
    if (drops % 5 == 0){
        result = strcat(result, "Plang");
    }
    if (drops % 7 == 0){
        result = strcat(result, "Plong");
    }
}

// int main(void){
//     convert("", 4);
//     return 0;
// }
