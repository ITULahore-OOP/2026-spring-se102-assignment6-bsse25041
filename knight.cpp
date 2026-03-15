#include "knight.h"


 Knight :: Knight(string n, int h, int b, int a, int c): Warrior(n,h,b,a){  //inhertied warrior class
    chargeBonus =  c;  
 }
    
int Knight:: getChargeBonus(){
    return chargeBonus;
}
    
int Knight :: calculateBurstDamage(){   
    int base =  getPower();  //since its a const function and cant be modified we create a new variable with the value
    return base + chargeBonus;
}