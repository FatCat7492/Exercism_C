#ifndef DARTS_H
#define DARTS_H
#include <stdint.h>


uint8_t score(struct coordinate_t landing_position);


 struct coordinate_t{
    float x;
    float y;
};

#endif
