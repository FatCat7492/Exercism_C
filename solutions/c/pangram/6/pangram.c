#include "pangram.h"
#include <string.h>
#include <stdio.h>
#include <stdbool.h>

bool is_pangram(const char *sentence){
    // char string[1000] = {0};
    // strcpy(string, sentence);
    // printf("The sentence is: %s\n", string);

    // int i = 0;
    // while (string[i] != '\0'){
    //     if (string[i] >= 65 && string[i] <= 90){
    //         string[i] += 32;
    //     }
    //     i++;
    // }

    if (sentence == NULL)
        return false;
    int needle = 'a';

    int i = 0;
    while (sentence[i] != '\0'){
        if (needle == 'z' || needle == 'Z'){
            printf("It's a pangram\n");
            return 1;
        }
        if (needle == sentence[i] || needle == sentence[i] + 32){
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

//     char *sentence_test = "the_quick_brown_fox_jumps_over_the_lazy_dog";
//     is_pangram(sentence_test);
//     return 0;
// }

