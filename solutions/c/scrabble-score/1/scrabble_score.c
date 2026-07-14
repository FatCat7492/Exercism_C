#include "scrabble_score.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

unsigned int score(const char *word){
    int count;
    size_t len = strlen(word) + 1;

    char *copy;
    char *copycop;
    copycop = malloc(len);
    copy = malloc(len);
    copycop = copy;
    while (*word){
        if (*word >= 'A' && *word <= 'Z'){
            // *copy -= '0';
            *copy = *word;
            copy++;
            word++;

        }
        else if ((*word >= 'a' && *word <= 'z')){
            *copy = *word - 32;            
            copy++;
            word++;
        }
        else
            return 0;
    }

    *copy = '\0';
    printf("%s\n", copycop);
    
    count = 0;
    while (*copycop){
        if (*copycop == 'A' || *copycop == 'E' || *copycop == 'I' || *copycop == 'O' || *copycop == 'U' || *copycop == 'L' || *copycop == 'N' || *copycop == 'R' || *copycop == 'S' || *copycop == 'T'){
            count += 1;
            copycop++;
        }
        else if (*copycop == 'D' || *copycop == 'G'){
            count += 2;
            copycop++;
        }
        else if (*copycop == 'B'|| *copycop == 'C' || *copycop == 'M' || *copycop == 'P'){
            count += 3;
            copycop++;
        }
        else if (*copycop == 'F'|| *copycop == 'H' || *copycop == 'V' || *copycop == 'W' || *copycop == 'Y'){
            count += 4;
            copycop++;
        }
        else if (*copycop == 'K'){
            count += 5;
            copycop++;
        } 
        else if (*copycop == 'J'|| *copycop == 'X'){
            count += 8;
            copycop++;
        }
        else if (*copycop == 'Q'|| *copycop == 'Z'){
        count += 10;
        copycop++;
        }
    }
    printf("Points: %d\n", count);
    return count;
}

// int main(void){
//     char* word;
//     word = "quirky";
//     score(word);
//     return 0;
// }
