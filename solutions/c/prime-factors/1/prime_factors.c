#include "prime_factors.h"
#include <stdio.h>

size_t find_factors(uint64_t n, uint64_t factors[static MAXFACTORS]){
    size_t prime_number;
    int i = 0;

    prime_number = 2;
    while (n > 1){
        if (n % prime_number == 0){
            n /= prime_number;
            factors[i] = prime_number;
            i++;
            printf("Prime number: %zu", prime_number);
        }
        else
            prime_number++;
    }
    return prime_number;

}

// int main(void){
//     u_int64_t n;
//     uint64_t list_of_factors[MAXFACTORS];

//     n = 120;
//     find_factors(n, list_of_factors);
//     return 0;
// }

