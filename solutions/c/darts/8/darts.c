#include "darts.h"
#include <stdio.h>
#include <stdint.h>

int main(void){

    struct coordinate_t landing = {0.4, 0.4};
    printf("Score is %hhu", score(landing));
    return 0;
}

uint8_t score(struct coordinate_t landing_position){
    // int i = 0;
    // int j = 0;


    // int rows[100];
    // int columns[100];

    // while (i < 21){
    //     rows[i] = i - 10;
    //     i++;
    // }
    // while (j < 21){
    //     columns[j] = j - 10;
    //     j++;
    // }
    // i = 0;
    // j = 0;

    // while (i < 21){
    //     while(j < 21){
    //         if (landing_position.x + landing_position.y > 10){
    //             return 0;
    //         }
    //         else if (landing_position.x + landing_position.y > 5 && landing_position.x + landing_position.y <= 10){
    //             return 1;
    //         }
    //         else if (landing_position.x + landing_position.y > 1 && landing_position.x + landing_position.y <= 5){
    //             return 5;
    //         }
    //         else
    //             return 10;
    //         j++;
    //     }
    //     i++;
    // }
    // return 0;

    if (landing_position.x + landing_position.y > 10){
        return 0;
    }
    else if (landing_position.x + landing_position.y > 5 && landing_position.x + landing_position.y <= 10){
        return 1;
    }
    else if (landing_position.x + landing_position.y > 1 && landing_position.x + landing_position.y <= 5){
        return 5;
    }
    else
        return 10;
}
