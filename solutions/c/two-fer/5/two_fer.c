#include "two_fer.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void two_fer(char *buffer, const char *name){
    buffer = malloc(atoi(buffer));
    if (strlen(name) == 0){
        printf("One for you, one for me");
    }
    else{
        printf("One for %s, one for me", name);
    }
}

// int main(void){
//     char *buffer = "100";
//     char *name = "Bohdan";
//     two_fer(buffer, name);
//     return 0;
// }