#include "main.h"

using namespace std;

int day_last = 0;

struct player
{
    int hp = 100;
    int xp = 0;
    int level = 1;
    int attack = 10;
    // int argent_collecter = 0;
    // int tache_effectuer = 0;
    int faith = 100;
    int attack_range = 1;
    string name;
    string origin;
};

string tache[6] = {"aller a la rivière chercher de l'eau pour l'apporter au pretre", "precher la sainte parole dans la rue", "acheter un employer", "eliminer un heritique", "chercher des nouveau compagnon"};            //TODO: add more tache

void printName()
{
    cout << "   db    8888Yb Yb  dP .dPY8 .dPY8      db    88         .dP-Y8    db     dP--b8 88--Yb    db    8b    d8 888888 88b 88 888888 \n";
    cout << "  dPYb   88__dP  YbdP   Ybo.   Ybo.    dPYb   88          Ybo.    dPYb   dP      88__dP   dPYb   88b  d88 88__   88Yb88   88   \n";
    cout << " dP__Yb  88  Yb   8P   o. Y8b o. Y8b  dP__Yb  88  .o     o. Y8b  dP__Yb  Yb      88 Yb   dP__Yb  88YbdP88 88     88 Y88   88   \n";
    cout << "dP    Yb 88oodP  dP    8bodP' 8bodP' dP    Yb 88ood8     8bodP  dP    Yb  YboodP 88  Yb dP    Yb 88 YY 88 888888 88  Y8   88   \n\n\n";
}

int main() 
{
    printName();
    player myPlayer;
    myPlayer.name = createPlayer();
    myPlayer.origin = setPlayerOrigin();
    int choice = 0;
    cout << "Bonjour " << myPlayer.name << "\n";
    //cout << "Pendant la nuit, tu senti une entité te soulever de ton lit pour te parler. C’était ton dieu qui voulait te parler, il te dit que tu vas devoir effectuer des taches pour avoir son pardon sinon à ta mort tu vas finir dans les abysses sacramental.\n\ntu tombes pendant quelque minute.\n\ncette troublante nuit de sommeil, tu te réveil pour commencer ta journée.\n\nTu te lève de ton lit et tu te dirige vers la salle de bain pour te laver et te préparer pour la journée qui t’attend." << endl;
    

    while (true)
    {
        if (myPlayer.origin == "Noble"){
            cout << "Depuis votre tendre enfance, vous les avez passé à courir dans les jardins de la citadelle, Flamunzuke, la demeure familliale\n";
            cout << "C'était un soir humide , vous aviez atteint la syphilis\n";
            cout << "Un orage se preparais, c'etait evident, cela vous causa l'obligation de rester au chaud\n";
            cout << "Vous decidez de quitter votre chambre, esseyant de trouver une distraction, devant vous un couloir est  divise en deux\n\nOu allez-vous:\n 1-A droite\n 2-A gauche\n\n >";
            cin >> choice;

            if (choice == 1){
                cout << "Devant vous une gargouille\n";
                myPlayer.hp = fight(myPlayer.hp, myPlayer.attack, 10, 1);
                //fight(int playerHp, int attack, int distance, int can_range)
            }
            // cout << "que veut tu faire\n";
            // cout << "1-aller collecter largent des gens du village\n";
            // cout << "2-aller à la taverne pour boire un coup\n";
            // cout << "3-effectuer une tache pour ton dieu\n";
            // cout << "4-aller te promener dans ton village\n";
            // cout << "> ";
            // cin >> choice;

            // if (choice == 1){
            //     cout << "tu te dirige vers la maison de ton voisin pour collecter l'argent qu'il te doit\n";
            //     cout << "tu arrive devant la porte de ton voisin, tu frappe à la porte\n";
            //     cout << "ton voisin ouvre la porte et te dit: bonjour " << myPlayer.name << " que me vaut l'honneur de ta visite\n";
            //     cout << "tu lui répond: bonjour je suis venu pour collecter l'argent que tu me doit\n";
            //     cout << "ton voisin te répond: je n'ai pas d'argent pour toi\n";
            //     cout << "tu lui répond: je ne suis pas venu pour rien, je vais devoir te tuer\n";
            //     cout << "ton voisin te répond: je ne vais pas me laisser faire\n";
            //     cout << "tu lui répond: tu n'as pas le choix\n";
            //     cout << "ton voisin te répond: je vais te tuer\n";
            //     cout << "tu lui répond: tu n'as pas le choix\n";
            //     cout << "tu commence a te battre\n";
            //     cout << "tu retourne chez toi\n";

            //     myPlayer.hp = fight(myPlayer.hp, myPlayer.attack);
            //     if (myPlayer.hp > 0)
            //     {
            //         myPlayer.xp += 10;
            //         cout << "You gained 10 XP!" << endl;
            //     }
            //     else
            //     {
            //         cout << "You gained 5 XP!" << endl;
            //         myPlayer.xp += 5;
            //         return 0;
            //     }
            // }
            // else if (choice == 2)
            // {
            //     cout << "tu te dirige vers la taverne pour boire un coup\n";
            //     cout << "tu arrive à la taverne\n";
            //     cout << "tu entre dans la taverne\n";
            //     cout << "tu te dirige vers le bar\n";
            //     cout << "tu demande au barman: bonjour, je voudrais une bière\n";
            //     cout << "le barman te répond: bonjour, voici votre bière\n";
            //     cout << "tu prend la bière et tu la bois et tu gagne 15hp\n";
            //     cout << "tu retourne chez toi\n";
            //     myPlayer.hp += 15;
            // }

            // else if (choice == 3)
            // {
            //     cout << tache[myPlayer.tache_effectuer] << endl;
            //     myPlayer.hp = fight(myPlayer.hp, myPlayer.attack);
            //     if (myPlayer.hp > 0)
            //     {
            //         myPlayer.xp += 10;
            //         cout << "You gained 10 XP!" << endl;
            //     }
            //     else
            //     {
            //         cout << "You gained 5 XP!" << endl;
            //         myPlayer.xp += 5;
            //         return 0;
            //     }

            //     myPlayer.tache_effectuer += 1;
            // }

            // else if (choice == 4)
            // {
            //     cout << "tu te prommene dans ton village\n";
            //     cout << "tu encourage les gens a travailler plus fort\n";
            //     cout << "tu passe devant le marcher e tu demande au marchand combien il a fait\n";
            //     cout << "le marchand te répond: j'ai fait 1000 pièces d'or\n";
            //     cout << "tu lui répond: je vais prendre 500 pièces d'or\n";
            //     cout << "le marchand te répond: d'accord\n";
            //     myPlayer.argent_collecter += 500;
            // }
            // cout << "tu retourne chez toi\n";
            // cout << "tu te couche dans ton lit\n";
            // cout << "tu t'endors\n";
            // day_last += 1;

        }

        if (myPlayer.origin == "Pieux")
        {
            // cout << "que veut tu faire\n";
            // cout << "1-aller prier\n";
            // cout << "2-aller à la taverne pour boire un coup\n";
            // cout << "3-effectuer une tache pour ton dieu\n";
            // cout << "4-aller te promener dans le village\n";
            // cout << "5-aller à la rivière pour prier\n";
            // cout << "6-tuer un inclute\n";
            // cout << "> ";
            // cin >> choice;

            // if (choice == 1)
            // {
            //     cout << "tu te dirige vers l'église pour prier\n";
            //     cout << "tu arrive à l'église\n";
            //     cout << "tu entre dans l'église\n";
            //     cout << "tu te dirige vers le prêtre\n";
            //     cout << "tu demande au prêtre: bonjour, je voudrais prier\n";
            //     cout << "le prêtre te répond: bonjour, tu peux aller prier\n";
            //     cout << "tu te dirige vers le banc pour prier\n";
            //     cout << "tu prie\n";
            //     cout << "tu retourne chez toi\n";
            // }

            // else if (choice == 2)
            // {
            //     cout << "tu te dirige vers la taverne pour boire un coup\n";
            //     cout << "tu arrive à la taverne\n";
            //     cout << "tu entre dans la taverne\n";
            //     cout << "tu te dirige vers le bar\n";
            //     cout << "tu demande au barman: bonjour, je voudrais une bière\n";
            //     cout << "le barman te répond: bonjour, voici votre bière\n";
            //     cout << "tu prend la bière et tu la bois et tu gagne 15hp\n";
            //     cout << "tu retourne chez toi\n";
            //     myPlayer.hp += 15;
            // }

            // else if (choice == 3)
            // {
            //     cout << tache[myPlayer.tache_effectuer] << endl;
            //     myPlayer.hp = fight(myPlayer.hp, myPlayer.attack);
            //     if (myPlayer.hp > 0)
            //     {
            //         myPlayer.xp += 10;
            //         cout << "You gained 10 XP!" << endl;
            //     }
            //     else
            //     {
            //         cout << "You gained 5 XP!" << endl;
            //         myPlayer.xp += 5;
            //         return 0;
            //     }
                

            //     myPlayer.tache_effectuer += 1;
            // }
        }
        myPlayer.level = level_up(myPlayer.xp, myPlayer.level);
    }

    bool win = fight(myPlayer.hp, myPlayer.attack, 10, 0);
    if (win)
    {
        myPlayer.xp += 10;
        cout << "You gained 10 XP!" << endl;
    }
    else
    {
        cout << "You gained 5 XP!" << endl;
        myPlayer.xp += 5;
    }
    return 0;
}
    


