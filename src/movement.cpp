#include <iostream>

using namespace std;

string move(string enplacement){
    int choice;
    cout << "Où voulez vous aller: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            enplacement = "Churche";
            break;
        
        case 2:
            enplacement = "Bar";
            break;
        
        case 3:
            enplacement = "Market";
            break;
        
        case 4:
            enplacement = "Castle";
            break;
    }
    return enplacement;    
}