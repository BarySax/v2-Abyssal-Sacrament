#include "main.h"

using namespace std;

struct player
{
    int hp = 100;
    int xp = 0;
    string name;
    string type;
};

int main() 
{
    player myPlayer;
    myPlayer.name = createPlayer();
    myPlayer.type = setPlayerType();
    

    cout << "Bonjour " << myPlayer.name << " le " << myPlayer.type << "\n";
    return 0;
}