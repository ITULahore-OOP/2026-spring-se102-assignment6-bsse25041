#ifndef KNIGHT_H
#define KNIGHT_H
#include <iostream>
#include "warrior.h"
using namespace std;

class Knight: public Warrior{
    int chargeBonus;
    public:
    Knight(string n, int h, int b, int a, int c);
    int getChargeBonus();
    int calculateBurstDamage();
};
#endif