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
    if (myPlayer.origin == "Sans dessein") {
        cout << "Salutation, " << myPlayer.name << ", dans ce monde froid, vous n'êtes rien\n";
    } else if (myPlayer.origin == "Sans dessein") {
        cout << "Salutation, " << myPlayer.name << ", vous êtes de toute évidence pure\n";
    } else if (myPlayer.origin == "Pieux") {
        cout << "Salutation, " << myPlayer.name << ", de toute évidence, votre vie n'a été que de servir votre saint patron\n";
    }
    return 0;
}
