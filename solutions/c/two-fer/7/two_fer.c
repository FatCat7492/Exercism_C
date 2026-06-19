#include "two_fer.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void two_fer(char *buffer, const char *name){
    int buff = atoi(buffer);
    printf("%d\n", buff);
    buffer = malloc(buff + 1);
    if (strlen(name) == 0){
        printf("One for you, one for me\n");
    }
    else{
        printf("One for %s, one for me\n", name);
    }
}

// int main(void){
//     char *buffer = "100";
//     char *name = "Bohdan";
//     two_fer(buffer, name);
//     return 0;
// }