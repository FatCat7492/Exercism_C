#ifndef DARTS_H
#define DARTS_H
#include <stdint.h>


uint8_t score(struct coordinate_t landing_position);


 struct coordinate_t{
    uint8_t x;
    uint8_t y;
};

#endif
