#include "two_fer.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void two_fer(char *buffer, const char *name){
    if (name[0] == '\0'){
        sprintf(buffer, "One for you, one for me");
    }
    else{
        sprintf(buffer, "One for %s, one for me", name);
    }
    printf("%s", buffer);
}

// int main(void){
//     char buffer[100] = {0};
//     char *name = "";
//     (two_fer(buffer, name));
//     return 0;
// }