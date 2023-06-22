#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct underLordDota{
    char heroName[200];
    int health;
    double damage;
};

//Function to print the data on a struct
void printHeroPool(struct underLordDota heroPool[], int c){
    for(int i=0; i<c; i++){
        printf("%-10s %10d %10.2lf\n", heroPool[i].heroName, heroPool[i].health, heroPool[i].damage);
    }
}

void swapHeroPosition(struct underLordDota heroPool[], int x, int y){
    struct underLordDota tempHero;
    tempHero = heroPool[x];
    heroPool[x] = heroPool[y];
    heroPool[y] = tempHero;
}

int main(void){
    int count = 5;

    //How much hero we want to create
    struct underLordDota heroPool[count];

    //The input
    char name[5][200] = {"Axe", "Drow", "Crystal M", "Omni K", "Doom"};
    int health[5] = {600, 300, 250, 500, 650};
    double damage[5] = {22.5, 31.7, 15.0, 39.5, 35.21};

    //Store all the input to the data struct
    for(int i=0; i<count; i++){
        strcpy(heroPool[i].heroName, name[i]);
        heroPool[i].health = health[i];
        heroPool[i].damage =damage[i];
    }
    printHeroPool(heroPool, count);
    int x = 2;
    int y = 4;
    swapHeroPosition(heroPool, x, y);
    puts("");
    printHeroPool(heroPool, count);

    return 0;
}