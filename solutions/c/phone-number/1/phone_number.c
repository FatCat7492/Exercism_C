#include "phone_number.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *phone_number_clean(const char *input){
    char* phone_number = 0;
    phone_number = malloc(strlen(input) + 1);
    int count;

    count = 0;

    if (phone_number == NULL)
        return NULL;

    // Check for the indicator and remove it if necessary
    while (*input == '+' || *input == '1'){
        if (*input == '+' || *input == '1')
            *input++;
        else 
            break;
    }

    while (*input){

        if (*input >= '0' && *input <= '9'){
            *phone_number = *input;
            count++;
            printf("%c", *phone_number);
            *phone_number++;
            input++;
        }
        else
            *input++;
    }
    if (count != 10){
            phone_number = "0000000000";
            return phone_number;
    }
    *phone_number = '\0';
    return phone_number;
}

// int main(void){
//     char* input;
//     input = "123456789";
//     phone_number_clean(input);
//     return 0;
// }
