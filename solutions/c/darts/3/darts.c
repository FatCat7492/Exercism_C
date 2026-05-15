#include "darts.h"
#include <stdio.h>


int darts(int x, int y){
    int i = 0;
    int j = 0;

    int rows[100];
    int columns[100];

    while (i < 21){
        rows[i] = i - 10;
        i++;
    }
    while (j < 21){
        columns[j] = j - 10;
        j++;
    }
    i = 0;
    j = 0;

    while (i < 21){
        while(j < 21){
            if (rows[i] + columns[j] > 10){
                return 0;
            }
            else if (rows[i] + columns[j] > 5 && rows[i] + columns[j] <= 10){
                return 1;
            }
            else if (rows[i] + columns[j] > 1 && rows[i] + columns[j] <= 5){
                return 5;
            }
            else
                return 10;
            j++;
        }
        i++;
    }

    /*i = 0;
    while (i < 21){
        printf("%d", arr[i]);
        i++;
    }*/
}
