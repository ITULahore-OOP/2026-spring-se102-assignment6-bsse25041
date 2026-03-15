#ifndef SPELLBLADE_H
#define SPELLBLADE_H
#include <iostream>
#include "warrior.h"
#include "magicalentity.h"
using namespace std;


class SpellBlade: public Warrior, public MagicalEntity{
    public:
    SpellBlade(string n, int h, int b, int a, int m, int s);
    int calculateHybridDamage();
};
#endif