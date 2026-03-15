#include "warrior.h"

 Warrior :: Warrior(string n, int h, int b, int a): Hero(n, h, b){   //since it inherits from hero class 
    armorRating = a;
 }
 
 //basic getter
 int Warrior :: getArmor(){
    return armorRating;
 }
   
 int Warrior :: calculateEffectiveHealth(){
    return getHealth() + (armorRating *2);   //getting the health value from hero class thru getter function
 }

