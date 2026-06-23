#include "raindrops.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void convert(char result[], int drops){

    char *mod3 = "Pling";
    char *mod5 = "Plang";
    char *mod7 = "Plong";
    result = malloc(100 * sizeof(char));

    if (!((drops % 3 == 0) || (drops % 5 == 0) || (drops % 7 == 0))){
        sprintf(result, "%d", drops);
    }
    if (drops % 3 == 0){
        result = strcat(result, mod3);
    }
    if (drops % 5 == 0){
        result = strcat(result, mod5);
    }
    if (drops % 7 == 0){
        result = strcat(result, mod7);
    }
    printf("%s\n", result);
}

// int main(void){
//     convert("", 4);
//     return 0;
// }
