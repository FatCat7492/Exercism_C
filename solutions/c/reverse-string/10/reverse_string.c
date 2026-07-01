#include "reverse_string.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *reverse(const char *value){

    int i = 0;

    if (value == NULL)
        return 0;

    size_t len = strlen(value);

char *result;
    result = malloc(sizeof(value) + 1);

    if (result == NULL)
        return  NULL;

    while (i < len){
        result[i] = value[len -1 - i];
        i++;
    }
    result[i] = '\0';

    printf("Original: %s\n", value);
    printf("resultd: %s\n", result);
    return result;
}

// int main(void){
//     char *sentence = "drawer";
//     sentence = reverse(sentence);
//     free(sentence);
//     return 0;
// }
