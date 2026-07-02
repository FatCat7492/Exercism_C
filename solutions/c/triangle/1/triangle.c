#include "triangle.h"
#include <stdio.h>
#include <stdbool.h>

bool is_triangle(triangle_t triangle){

    if ((triangle.a <= 0) || (triangle.b <= 0) || (triangle.c <= 0)){
        printf("Sides are off\n");
        return false;
    }

    if ((triangle.a + triangle.b >= triangle.c) &&
        (triangle.b + triangle.c >= triangle.a) &&
        (triangle.a + triangle.c >= triangle.b)){
            printf("Yes it's a triangle!\n");
            return true;
        }
    else{
        printf("Nope it's not a triangle!\n");
        return false;
    }
}

// int main(void){
//     triangle_t triangle;

//     triangle.a = 0;
//     triangle.b = 1;
//     triangle.c = 2;

//     is_triangle(triangle);
//     return 0;
// }