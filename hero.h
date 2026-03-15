#ifndef HERO_H
#define HERO_H
#include<iostream>
using namespace std;

class Hero{
    string heroName;
    int health;
    int basePower;
    public:
    Hero(string n, int h, int b);
    ~Hero();
    string getName()const;
    int getHealth() const;
    int getPower() const;
    void takeDamage(int d);
    bool operator>(const Hero &other) const;
    int operator+(const Hero &other) const;
};
#endif

