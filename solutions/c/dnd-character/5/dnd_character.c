#include "dnd_character.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int modifier(int score);
int ability(void);
dnd_character_t make_dnd_character(void);

int ability(void){
    int max;
    int min;
    int i;
    int sum;

    srand(time(NULL));
    max = 6;
    min = 0;

    char array[4] = {0};
    i = 0;
    while (i < 4){
        int r = rand() % (max - min + 1) + min;
        array[i] = r;
        printf("%d\n", array[i]);
        i++;
    }
    i = 0;
    sum = 0;

    while (i < 4){
        if (array[i] <= max){
            max = array[i];
            i++;
        }
        else
            i++;
    }
    i = 0;
    while (i < 4){
        sum += array[i];
        i++;
    }
    sum -= max;
    printf("Min %d\n", max);
    printf("Sum is %d\n", sum);
    return sum;
}

int modifier(int score){
    return floor((score - 11) / 2);
}


dnd_character_t make_dnd_character(void){

    dnd_character_t player;
    player.strength = ability();
    player.dexterity = ability();
    player.constitution = ability();
    int const_modifier = modifier(player.constitution);
    player.intelligence = ability();
    player.wisdom = ability();
    player.charisma = ability();
    player.hitpoints = 10 - const_modifier;
    printf("Strength points %d\n", player.strength);
    printf("dexterity points %d\n", player.dexterity);
    printf("constitution points %d\n", player.constitution);
    printf("intelligence points %d\n", player.intelligence);
    printf("wisdom points %d\n", player.wisdom);
    printf("charisma points %d\n", player.charisma);
    printf("hitpoints points %d\n", player.hitpoints);
    
    
    return player;
}

// int main(void){
//     printf("modifier %d\n", modifier(3));
//     make_dnd_character();
//     return 0;
// }