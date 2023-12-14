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
    player myPlayer;
    myPlayer.name = createPlayer();
    myPlayer.origin = setPlayerOrigin();
    cout << "bonjour " << myPlayer.name << "\n";
    return 0;
}
