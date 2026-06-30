#include "reverse_string.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *reverse(const char *value){

    size_t i = 0;

    char *reverse;
    reverse = malloc(sizeof(value) + 1);

    if (value == NULL)
        return 0;

    if (reverse == NULL)
        return "Memory Allocation Failed";
    printf("Original: %s\n", value);


    while (i < strlen(value)){
        reverse[i] = value[strlen(value) - 1- i];
        i++;
    }
    reverse[i] = '\0';
    printf("Reversed: %s\n", reverse);
    return reverse;
}

int main(void){
    char *sentence = "I'm hungry!";
    reverse(sentence);
    return 0;
}
