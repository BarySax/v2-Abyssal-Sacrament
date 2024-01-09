#include <iostream>
#include <stdlib.h>
#include <unistd.h>
using namespace std;
struct Enemy {
    int health;
    int attack;
    int attack_range;
    int defense;
    int speed;
};

int fight(int playerHp, int attack, int distance, int can_range)
{

    Enemy enemy;
    enemy.health = 100;
    enemy.attack = 15;
    enemy.attack_range = 1;
    enemy.defense = 10;
    enemy.speed = 2;
    can_range = distance - 1;
    system("clear");
    while (playerHp > 0 && enemy.health > 0)
    {
        cout << "\nInformation:" << endl;
        cout << "   Player HP: " << playerHp << endl;
        cout << "   Enemy HP: " << enemy.health << endl;
        cout << "   Distance: " << distance << endl;
        cout << "\nAction:" << endl;
        cout << "   1. Attack" << endl;
        cout << "   2. Move" << endl;
        cout << "   3. `:`:`:`:`:`: " << endl;
        cout << "> ";
        int choice;
        cin >> choice;

        if (choice == 1)
        {   
            cout << "\nWeapon" << endl;
            cout << "   1. Sword" << endl;
            cout << "   2. Crossbow" << endl;
            cout << "> ";
            int choice;
            cin >> choice;
            if (choice == 1)
            {
                can_range = distance - 1;
                if (can_range <= 0)
                {
                    int damage = rand() % 10 + 1;
                    cout << "You attack the enemy for " << attack + damage << " damage!" << endl;
                    enemy.health -= attack + damage;
                    
                }
                else
                {
                    cout << "You attack nothing" << endl;   
                }
            }
            else
            {
                can_range = distance - 10;
                if (can_range <= 0)
                {
                    int damage = rand() % 5 + 1;
                    cout << "You attack the enemy for " << attack - damage << " damage!" << endl;
                    enemy.health -= attack - damage;
                    
                }
                else
                {
                    cout << "You attack nothing" << endl;   
                }

            }
        }
        else if (choice == 2)
        {
            cout << "\nMovement:" << endl;
            cout << "Back or Front" << endl;
            cout << "> ";
            int choice;
            cin >> choice;

            if (choice == 1)
            {
                distance += 2;
            }
            else
            {
                distance -= 2;
            }
        }
        else if (choice == 3)
        {
            cout << "You run away!" << endl;
            return false;
        }
        else
        {
            cout << "Invalid choice!" << endl;
        }
        if (playerHp <= 0 && enemy.health <= 0)
        {
            break;
        }
        sleep(2);
        system("clear");
        cout << "Enemy's turn" << endl;
        if (distance <= 0)
        {
            int damage = rand() % 10 + 1;
            cout << "The enemy attacks you for " << damage << " damage!" << endl;
            playerHp -= damage;
        }
        else
        {
            cout << "The enemy goes in your direction" << endl;
            distance -= 2;
        }
        
        sleep(2);
        system("clear");
    }

    

    if (playerHp > 0)
    {
        cout << "You win!" << endl;
     
        return playerHp;
    }
    else
    {
        cout << "You lose!" << endl;
        return 0;
    }
}