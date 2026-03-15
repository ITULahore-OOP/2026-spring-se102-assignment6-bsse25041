#include "spellblade.h"

SpellBlade :: SpellBlade(string n, int h, int b, int a, int m, int s): Warrior(n,h,b,a), MagicalEntity(m,s){}
//since this class inky inherits from other classes all attributes are initialized in the constructors of different classes thru serial initialization

int SpellBlade :: calculateHybridDamage(){
    return getPower() + getSpellPower();   //using getter functions for both attributes
}