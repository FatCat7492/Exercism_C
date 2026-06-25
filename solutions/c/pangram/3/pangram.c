#include "pangram.h"
#include <string.h>
#include <stdio.h>
#include <stdbool.h>

bool is_pangram(const char *sentence){
    char string[100] = {0};
    strcpy(string, sentence);
    printf("The sentence is: %s\n", string);

    int i = 0;
    while (string[i] != '\0'){
        if (string[i] >= 65 && string[i] <= 90){
            string[i] += 32;
        }
        i++;
    }

    int needle = 'a';

    i = 0;
    while (string[i] != '\0'){
        if (needle == 'z'){
            printf("It's a pangram\n");
            return 1;
        }
        if (needle == string[i]){
            i = 0;
            needle++;
            continue;
        }
        else
            i++;
    }
    printf("Needle final is %c\n", needle);

    return 0;
}

// int main(void){

//     char *sentence_test = "a quick movement of the enemy will jeopardize five gunboats";
//     is_pangram(sentence_test);
//     return 0;
// }

