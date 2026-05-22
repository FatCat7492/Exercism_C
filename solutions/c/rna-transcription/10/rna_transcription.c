#include "rna_transcription.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *to_rna(const char *dna){
    int i = 0;
    int len = strlen(dna) + 1;
    char *rna = malloc((sizeof(char) * len) + 1);

    while (i < len)
    {
        if (dna[i] == "G"){
            rna[i] = "C";
        }
        else if (dna[i] == "C"){
            rna[i] = "G";
        }
        else if (dna[i] == "T"){
            rna[i] = "A";
        }
        else if (dna[i] == "A"){
            rna[i] = "U";
        }
        i++;
    }
    rna[len] = '\0';
    return rna;
    // while (rna[i] != '\0')
    // {
    //     printf("%s", rna[i]);
    //     i++;
    // }
    // i = 0;
}

// int main(void){
//     char *string = "C, G";
//     char *rna = to_rna(string);
//     printf("%s", rna);
//     free(rna);
//     return 0;
// }
