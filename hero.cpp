#include "hero.h"

Hero ::  Hero(string n, int h, int b){
    heroName = n;
    health = h;
    basePower = b;

}
    
Hero :: ~Hero(){
    cout<<"Hero defeated!"<<endl;
}
//basic getters
string Hero:: getName()const{
    return heroName;
}
   
int Hero:: getHealth()const{
    return health;
}
   
int Hero :: getPower()const{
    return basePower;
}
    
void Hero :: takeDamage(int d){
    health = health -d;
    if(health<0)  //check to ensure tht health doesnt become negative as tht isnt possible
        health = 0;
};

    
bool Hero :: operator>(const Hero &other) const{
    if(basePower > other.basePower)   //since this is a member function we can access the attribute for the class directly
        return true;
    else
        return false;
    
}

int Hero :: operator+(const Hero &other) const{
    return health + other.health;   //basic sum overloading function
}