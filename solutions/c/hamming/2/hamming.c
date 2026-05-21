#include "hamming.h"
#include <stdio.h>
#include <string.h>

int compute(const char *lhs, const char *rhs){
    int i = 0;
    int count = 0;

    if (strlen(lhs) != strlen(rhs)){
        return 0;
    }

    while(lhs){
        if (lhs[i] == rhs[i]){
            i++;
        }
        else{
            i++;
            count++;
        }
    }
    return count;
}

// int main(void){
//     char *string = "Hello";
//     stringlen(string);
//     return 0;
// }
