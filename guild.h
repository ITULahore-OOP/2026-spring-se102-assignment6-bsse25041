#ifndef GUILD_H
#define GUILD_H
#include <iostream>
#include "hero.h"
using namespace std;

class Guild{
    string guildName;
    Hero* roster[15];
    int memberCount;
    public:
    Guild(string n);
    ~Guild();
    int calculateTotalGuildPower();
    void displayGuildStats();
    void operator +=(Hero* newHero);
    friend ostream& operator<<(ostream& os, const Guild& g);
};

#endif