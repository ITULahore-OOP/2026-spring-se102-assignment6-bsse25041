#include <iostream>
#include "Hero.h"
#include "Guild.h"

using namespace std;

int main() {
    Guild myGuild("The Avengers");

    Hero h1("Iron Man", 100, 85);
    Hero h2("Thor", 150, 95);
    Hero h3("Hulk", 200, 100);

    myGuild += &h1;  //using reference as it will be passed as a pointer 
    myGuild += &h2;
    myGuild += &h3;

    cout << "\n--- Guild Roster ---" << endl;
    cout << myGuild;

    cout << "\n--- Guild Stats ---" << endl;
    myGuild.displayGuildStats();

    return 0;
}