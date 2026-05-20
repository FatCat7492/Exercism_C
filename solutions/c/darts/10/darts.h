#ifndef DARTS_H
#define DARTS_H
#include <stdint.h>


uint8_t score(struct coordinate_t landing_position);


typedef struct{
    float x;
    float y;
}coordinate_t;

#endif
