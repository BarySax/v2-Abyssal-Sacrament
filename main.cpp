#include "main.h"

using namespace std;

int day_last = 0;

struct player
{
    int hp = 100;
    int xp = 0;
    int level = 1;
    int strenght = 10;
    int dexterity = 70;
    int faith = 10;
    int attack_range = 1;
    string name;
    string origin;
};


void printName()
{
    cout << "   db    8888Yb Yb  dP .dPY8 .dPY8      db    88         .dP-Y8    db     dP--b8 88--Yb    db    8b    d8 888888 88b 88 888888 \n";
    cout << "  dPYb   88__dP  YbdP   Ybo.   Ybo.    dPYb   88          Ybo.    dPYb   dP      88__dP   dPYb   88b  d88 88__   88Yb88   88   \n";
    cout << " dP__Yb  88  Yb   8P   o. Y8b o. Y8b  dP__Yb  88  .o     o. Y8b  dP__Yb  Yb      88 Yb   dP__Yb  88YbdP88 88     88 Y88   88   \n";
    cout << "dP    Yb 88oodP  dP    8bodP' 8bodP' dP    Yb 88ood8     8bodP  dP    Yb  YboodP 88  Yb dP    Yb 88 YY 88 888888 88  Y8   88   \n\n\n";
}

int main() 
{
    printName();
    player myPlayer;
    myPlayer.name = createPlayer();
    myPlayer.origin = setPlayerOrigin();
    //int choice = 0;
    cout << "Hello " << myPlayer.name << "\n";
    myPlayer.hp = fight(myPlayer.hp, myPlayer.dexterity, myPlayer.strenght, myPlayer.faith, 2 , myPlayer.attack_range, 2, 3);
    
    bool win = fight(myPlayer.hp, myPlayer.dexterity, myPlayer.strenght, myPlayer.faith, 2, myPlayer.attack_range, 2, 3);
    if (win)
    {
        myPlayer.xp += 10;
        cout << "You gained 10 XP!" << endl;
    }
    else
    {
        cout << "You gained 5 XP!" << endl;
        myPlayer.xp += 5;
    }
    return 0;
}
    