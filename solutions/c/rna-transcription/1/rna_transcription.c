#include "rna_transcription.h"
#include <stdio.h>
#include <string.h>

char *to_rna(const char *dna){
    int i = 0;
    char rna[1000] = "";
    while (dna[i] != '\0')
    {
        if (dna[i] == 'T'){
            rna[i] = 'U';
            i++;
        }
        else{
            rna[i] = dna[i];
            i++;
        }
    }
    i = 0;
    return &rna[i];
    // while (rna[i] != '\0')
    // {
    //     printf("%s", rna[i]);
    //     i++;
    // }
    // i = 0;
}

int main(void){
    char *strand = "A, I, E, U, T";
    printf("%s", to_rna(strand));
    return 0;
}
