#include "resistor_color.h"
#include <stdio.h>

int color_code(resistor_band_t color);

const resistor_band_t *colors(void);


int main(){
    color_code(ORANGE);
    return 0;
}

int color_code(resistor_band_t color){
    return color;
}

const resistor_band_t *colors(void){
    static const resistor_band_t arr[] = { BLACK, BROWN, RED,    ORANGE, YELLOW,
                                        GREEN, BLUE,  VIOLET, GREY,   WHITE };
    return arr;
}
