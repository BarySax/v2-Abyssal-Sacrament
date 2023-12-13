#include <iostream>

using namespace std;




string createPlayer() {
    string name;
    cout << "entrer votre nom: ";
    cin >> name;

    return name;
}

string setPlayerType() {
    string type;
    cout << "entrer votre type parmis\n1-chevalier\n2-sans dessin\n3-noble:\n";
    cin >> type;

    if (type == "1") {
        type = "chevalier";
    } else if (type == "2") {
        type = "sans dessin";
    } else if (type == "3") {
        type = "noble";
    } else {
        cout << "Invalid type\n";
        setPlayerType();
    }

    return type;
}