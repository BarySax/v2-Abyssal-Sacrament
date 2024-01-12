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

int fight(int playerHp, int attack, int distance, int can_range, int num_attack, int num_heal)
{

    Enemy enemy;
    enemy.health = 100;
    enemy.attack = 15;
    enemy.attack_range = 1;
    enemy.defense = 10;
    enemy.speed = 2;
    can_range = distance - 1;
    while (playerHp > 0 && enemy.health > 0)
    {
        sleep(1.5);
        while (num_attack > 0)
        {
            system("clear");
            cout << "\nInformation:" << endl;
            cout << "   Player HP: " << playerHp << endl;
            cout << "   Enemy HP: " << enemy.health << endl;
            cout << "   Distance: " << distance << endl;
            cout << "   Number of potion left: " << num_heal << endl;
            cout << "\nAction:" << endl;
            cout << "   1. Attack" << endl;
            cout << "   2. Move" << endl;
            cout << "   3. Heal" << endl;
            cout << "   4. Leave " << endl;
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
                if (num_heal >= 1)
                {
                    cout << "You take a potion" << endl;
                    num_heal -= 1;
                    playerHp += 10;
                }
                else
                {
                    cout << "You shearch in you bag but you find nothing" << endl;
                }
            }
            else if (choice == 4)
            {
                cout << "You run away!" << endl;
                return false;
            }
            else if (choice == 5)
            {
                playerHp = 0;
            }
            else
            {
                cout << "Invalid choice!" << endl;
            }
            if (playerHp <= 0 || enemy.health <= 0)
            {
                break;
            }
            num_attack -= 1;
            sleep(1.5);
            system("clear");
        }
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

        sleep(1.5);
        num_attack = 2;
    }

    

    if (playerHp > 0)
    {
        cout << "You win!" << endl;
     
        return playerHp;
    }
    else
    {
        cout << "SHLAAAK" << endl;
        sleep(1);
        cout << "That was the last sound you heard, before your body touched the ground" << endl;
        cout << "Mortal, you're dead..." << endl;
        sleep(4);
        exit(0);
    }
}