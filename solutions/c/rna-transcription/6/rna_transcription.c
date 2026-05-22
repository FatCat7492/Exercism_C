#include "rna_transcription.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *to_rna(const char *dna){
    int i = 0;
    int len = strlen(dna) + 1;
    char *rna = malloc((sizeof(char) * len) + 1);

    char indxdna[4] = {'G', 'C', 'T', 'A'};
    char indxrna[4] = {'C', 'G', 'A', 'U'};

    while (i < len)
    {
        if (dna[i] == indxdna[0]){
            rna[i] = indxrna[0];
        }
        else if (dna[i] == indxdna[1]){
            rna[i] = indxrna[0];
        }
        else if (dna[i] == indxdna[2]){
            rna[i] = indxrna[2];
        }
        else if (dna[i] == indxdna[3]){
            rna[i] = indxrna[3];
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

int main(void){
    char *string = "C, G";
    char *rna = to_rna(string);
    printf("%s", rna);
    free(rna);
    return 0;
}
