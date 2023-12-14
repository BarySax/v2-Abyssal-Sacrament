#include "main.h"

using namespace std;

struct player
{
    int hp = 100;
    int xp = 0;
    string name;
    string origin;
};

int main() 
{
    cout << "   db    8888Yb Yb  dP .dPY8 .dPY8      db    88         .dP-Y8    db     dP--b8 88--Yb    db    8b    d8 888888 88b 88 888888 \n";
    cout << "  dPYb   88__dP  YbdP   Ybo.   Ybo.    dPYb   88          Ybo.    dPYb   dP      88__dP   dPYb   88b  d88 88__   88Yb88   88   \n";
    cout << " dP__Yb  88  Yb   8P   o. Y8b o. Y8b  dP__Yb  88  .o     o. Y8b  dP__Yb  Yb      88 Yb   dP__Yb  88YbdP88 88     88 Y88   88   \n";
    cout << "dP    Yb 88oodP  dP    8bodP' 8bodP' dP    Yb 88ood8     8bodP  dP    Yb  YboodP 88  Yb dP    Yb 88 YY 88 888888 88  Y8   88   \n\n\n";
    player myPlayer;
    myPlayer.name = createPlayer();
    myPlayer.origin = setPlayerOrigin();
    cout << "bonjour " << myPlayer.name << "\n";
    return 0;
}
