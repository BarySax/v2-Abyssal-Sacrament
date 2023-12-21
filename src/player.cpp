#include <iostream>

using namespace std;




string createPlayer() {
    string name;
    cout << "Qui êtes vous: ";
    cin >> name;

    return name;
}

string setPlayerOrigin() {
    string origin;
    cout << "Q\n1-Sans dessein\n2-Noble\n3-Pieux:\n";
    cin >> origin;

    if (origin == "1") {
        origin = "Sans dessein";
        cout << "dans ce monde froid, vous n'êtes rien\n";
    } else if (origin == "2") {
        origin = "Noble";
        cout << "vous êtes de toute évidence pure\n";
    } else if (origin == "3") {
        origin = "Pieux";
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