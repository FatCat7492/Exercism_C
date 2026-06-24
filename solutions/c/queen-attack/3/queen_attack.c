#include "queen_attack.h"
#include <stdio.h>

attack_status_t can_attack(position_t queen_1, position_t queen_2){
    if ((queen_1.row > 7) || (queen_1.column > 7) || (queen_2.row > 7) || (queen_2.column > 7) || (queen_1.row == queen_2.row && queen_1.column == queen_2.column)){
        return INVALID_POSITION;
    }
    if ((queen_1.row == queen_2.row) ||
    (queen_1.column == queen_2.column) ||
    (queen_1.row - queen_2.row == queen_1.column - queen_2.column))
    {
        return CAN_ATTACK;
    }
    else
        return CAN_NOT_ATTACK;
}

// int main(void){
//     position_t pos1 = {2, 1};
//     position_t pos2 = {5, 4};

//     attack_status_t result = can_attack(pos1, pos2);
//     printf("Result is %d", result);
//     return 0;
// }
