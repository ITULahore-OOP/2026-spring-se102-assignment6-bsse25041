#include "guild.h"


Guild :: Guild(string n){
    guildName = n;
    memberCount = 0; //initialzing attributes to the default values
}
   
Guild :: ~Guild(){
    cout<<"The guild "<<guildName<<" has been disbanded!"<<endl;
}
    
int Guild :: calculateTotalGuildPower(){
    int g=0;    //so we can sum the individual power of each hero in the roster
    for(int i=0;i<memberCount;i++){
        g += roster[i]->getPower();   //accessing the getpower function for each ith index of roster array and adding the returned value to the g variable for each iteration
    }
    return g;
}
    
void Guild :: displayGuildStats(){
     int g =  calculateTotalGuildPower();  //so we can output the value for display
     cout<<"Guild Name: "<<guildName<<endl;
     cout<<"Total Members: "<<memberCount<<"/15"<<endl;
     cout<<"Total Guild Power: "<<g<<endl;
}
    
void Guild :: operator +=(Hero* newHero){ //operator overloaded 
    if(memberCount<15){   //checking if the array is full before adding a new pointer
        roster[memberCount]=newHero;
        memberCount++;
    }
    else
    cout<<"Guild is at full capacity!\n";
}
    
ostream& operator<<(ostream& os, const Guild& g){  //operator overloading for cout operation
    os <<"Guild: "<<g.guildName<<endl;
    os<<"Members: "<<g.memberCount<<endl;   //accessing the attributes for the guild g 
    for(int i=0;i<g.memberCount;i++){
        os<<"- "<<g.roster[i]->getName()<<" (Power: "<<g.roster[i]->getPower()<<")"<<endl;   //first we access the roster array in guild g then use that to point to getter functions for each hero index in the roster array
    }
 return os;
} 