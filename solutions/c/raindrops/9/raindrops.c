#include "raindrops.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *convert(char result[], int drops){

    result = malloc(100 * sizeof(int));

    result = strcpy(result, "\0");

    if (!((drops % 3 == 0) || (drops % 5 == 0) || (drops % 7 == 0))){
        snprintf(result, 1000, "%d", drops);
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
    return result;
}

// int main(void){
//     char *res = convert("", 106);
//     printf("String is: %s", res);
//     free(res);
//     return 0;
// }
