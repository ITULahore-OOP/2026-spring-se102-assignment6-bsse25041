#include "magicalentity.h"


 
MagicalEntity :: MagicalEntity(int m, int s){
    manaPool = m;   
    spellPower = s;
}
   
//basic getters 
int MagicalEntity :: getMana() const{
    return manaPool;
}
    
int MagicalEntity :: getSpellPower() const{
    return spellPower;
}