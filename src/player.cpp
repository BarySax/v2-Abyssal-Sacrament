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
    } else if (origin == "2") {
        origin = "Noble";
    } else if (origin == "3") {
        origin = "Pieux";
    } else {
        cout << "Invalid origin\n";
        setPlayerOrigin();
    }

    return origin;
}
