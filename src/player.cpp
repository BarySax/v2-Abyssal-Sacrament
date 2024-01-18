#include <iostream>

using namespace std;




string createPlayer() {
    string name;
    // Who are you
    cout << "Qui êtes vous: ";
    cin >> name;

    return name;
}

string setPlayerOrigin() {
    string origin;
    //1-French way to say someone with no future 2-Noble 3-Religious
    //PS: In the future we think that we will make origin influence the start of the game and some stat
    cout << "Q\n1-Sans dessein\n2-Noble\n3-Pieux:\n";
    cin >> origin;

    if (origin == "1") {
        //Sans dessein = French way to say someone with no future
        origin = "Sans dessein";
        //Some shit that just insult the player
        cout << "dans ce monde froid, vous n'êtes rien\n";
    } else if (origin == "2") {
        origin = "Noble";
        //Some shit that praise the player
        cout << "vous êtes de toute évidence pure\n";
    } else if (origin == "3") {
        //Pieux = Religious
        origin = "Pieux";
        //Some shit that say that the player is religious
        cout << "de toute évidence, votre vie n'a été que de servir votre saint patron\n";
    } else {
        cout << "Invalid origin\n";
        setPlayerOrigin();
    }
    return origin;
}

int level_up(int xp, int level){
    if (xp % 100 == 0){
        level += 1;
    }

    
    return level;
}