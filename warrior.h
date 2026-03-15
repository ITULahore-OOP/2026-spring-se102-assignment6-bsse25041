#ifndef WARRIOR_H
#define WARRIOR_H
#include <iostream>
#include "hero.h"
using namespace std;


class Warrior: public Hero{
    int armorRating;
    public:
    Warrior(string n, int h, int b, int a);
    int getArmor();
    int calculateEffectiveHealth();
};

#endif