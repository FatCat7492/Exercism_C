#include "binary.h"
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int convert(const char *input){

    int length = 0;
    int number_conversion = 0;
    int base_ten = 0;
    char str[100] = {0};

    int i = 0;

    while (input[i] != '\0'){
        str[i] = input[i];
        i++;
    }

    length = strlen(input) - 1;
    if (length == 1){
        return -1;
    }

    i = 0;
    while (length > 0){
        if (str[i] == '0'){
            i++;
            length--;
            continue;
        }
        else{
            number_conversion = pow(2, length);
            base_ten += number_conversion;
            i++;
        }
        length--;
    }
    printf("base_10 conversion = %d\n", base_ten);
    return base_ten;
}

// int main(void){

//     printf("%d", convert("101010100"));
//     return 0;
// }
