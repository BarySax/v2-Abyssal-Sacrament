#include <iostream>

using namespace std;

struct Enemy {
    int health;
    int attack;
    int defense;
};

bool fight(int playerHp, int attaque)
{
    Enemy enemy;
    enemy.health = 100;
    enemy.attack = 15;
    enemy.defense = 10;

    while (playerHp > 0 && enemy.health > 0)
    {
        cout << "Player HP: " << playerHp << endl;
        cout << "Enemy HP: " << enemy.health << endl;
        cout << "1. Attack" << endl;
        cout << "2. Run" << endl;
        cout << ">";
        int choice;
        cin >> choice;

        if (choice == 1)
        {
            int damage = rand() % 10 + 1;
            cout << "You attack the enemy for " << damage << " damage!" << endl;
            enemy.health -= attaque;
            damage = rand() % 10 + 1;
            cout << "The enemy attacks you for " << damage << " damage!" << endl;
            playerHp -= damage;
        }
        else if (choice == 2)
        {
            cout << "You run away!" << endl;
            return false;
        }
        else
        {
            cout << "Invalid choice!" << endl;
        }
    }

    if (playerHp > 0)
    {
        cout << "You win!" << endl;
        return true;
    }
    else
    {
        cout << "You lose!" << endl;
        return false;
    }
}