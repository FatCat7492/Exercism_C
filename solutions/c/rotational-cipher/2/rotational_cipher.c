#include "rotational_cipher.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *rotate(const char *text, int shift_key){
    char* cipher = malloc(strlen(text) + 1);
    int i;
    int temp = shift_key;
    int max_len = 25;

    i = 0;
    while (text[i] != '\0'){
        if ((text[i] >= 'a') && (text[i] <= 'z')){
            if (text[i] - 'a' + shift_key > max_len){
                shift_key -= 'a' - text[i];
                cipher[i] = 'z' + shift_key -1;
                shift_key = temp;
            }
            else
                cipher[i] = text[i] + shift_key;
        }
        else if ((text[i] >= 'A') && (text[i] <= 'Z')){
            if (text[i] - 'A' + shift_key > max_len){
                shift_key -= 'Z' - text[i];
                cipher[i] = 'A' + shift_key -1;
                shift_key = temp;
            }
            else
                cipher[i] = text[i] + shift_key;            
        }
        else
            cipher[i] = text[i];
        i++;
    }
    cipher[i] = '\0';
    printf("Cipher is %s", cipher);
    return cipher;
}

// int main(void){
//     char *string = "XYZZ";
//     int rotation = 26;
//     rotate(string, rotation);
//     return 0;
// }