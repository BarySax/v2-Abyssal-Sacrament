#include "main.h"

using namespace std;

struct player
{
    int hp = 100;
    int xp = 0;
    int level = 1;
    int attack = 10;
    int argent_collecter = 0;
    string name;
    string origin;
};

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
    cout << "bonjour " << myPlayer.name << "\n";

    cout << "Pendant la nuit, tu senti une entité te soulever de ton lit pour te parler. C’était ton dieu qui voulait te parler, il te dit que tu vas devoir effectuer des taches pour avoir son pardon sinon à ta mort tu vas finir dans les abysses sacramental.\n\ntu tombes pendant quelque minute.\n\ncette troublante nuit de sommeil, tu te réveil pour commencer ta journée.\n\nTu te lève de ton lit et tu te dirige vers la salle de bain pour te laver et te préparer pour la journée qui t’attend." << endl;
    
    if (myPlayer.origin == "Noble"){
        cout << "que veut tu faire\n";
        cout << "1-aller collecter largent des gens du village\n";
        cout << "2-aller à la taverne pour boire un coup\n";
        cout << "3-effectuer une tache pour ton dieu\n";
        cout << "4-aller te promener dans ton village\n";
        cout << "> ";
        cin >> choice;

        if (choice == 1){
            cout << "tu te dirige vers la maison de ton voisin pour collecter l'argent qu'il te doit\n";
            cout << "tu arrive devant la porte de ton voisin, tu frappe à la porte\n";
            cout << "ton voisin ouvre la porte et te dit: bonjour " << myPlayer.name << " que me vaut l'honneur de ta visite\n";
            cout << "tu lui répond: bonjour je suis venu pour collecter l'argent que tu me doit\n";
            cout << "ton voisin te répond: je n'ai pas d'argent pour toi\n";
            cout << "tu lui répond: je ne suis pas venu pour rien, je vais devoir te tuer\n";
            cout << "ton voisin te répond: je ne vais pas me laisser faire\n";
            cout << "tu lui répond: tu n'as pas le choix\n";
            cout << "ton voisin te répond: je vais te tuer\n";
            cout << "tu lui répond: tu n'as pas le choix\n";
            cout << "tu commence a te battre\n";
            cout << "tu retourne chez toi\n";

            bool win = fight(myPlayer.hp, myPlayer.attack);
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
        }
        else if (choice == 2)
        {
            cout << "tu te dirige vers la taverne pour boire un coup\n";
            cout << "tu arrive à la taverne\n";
            cout << "tu entre dans la taverne\n";
            cout << "tu te dirige vers le bar\n";
            cout << "tu demande au barman: bonjour, je voudrais une bière\n";
            cout << "le barman te répond: bonjour, voici votre bière\n";
            cout << "tu prend la bière et tu la bois\n";
            cout << "tu retourne chez toi\n";
        }

        else if (choice == 3)
        {
            cout << "tu te dirige vers l'église pour effectuer une tache pour ton dieu\n";
            cout << "tu arrive à l'église\n";
            cout << "tu entre dans l'église\n";
            cout << "tu te dirige vers le prêtre\n";
            cout << "tu demande au prêtre: bonjour, que puis-je faire pour vous\n";
            cout << "le prêtre te répond: bonjour, je voudrais que tu aille chercher de l'eau bénite à la rivière\n";
            cout << "tu répond: d'accord, je vais aller chercher de l'eau bénite à la rivière\n";
            cout << "tu te dirige vers la rivière\n";
            cout << "tu rencontre une creature diforme\n";
            cout << "tu commence a te battre\n";
            bool win = fight(myPlayer.hp, myPlayer.attack);
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

            cout << "tu arrive à la rivière\n";
            cout << "tu prend de l'eau bénite\n";
            cout << "tu retourne à l'église\n";
            cout << "tu arrive à l'église\n";
            cout << "tu donne l'eau bénite au prêtre\n";
            cout << "le prêtre te remercie\n";
            cout << "tu retourne chez toi\n";
        }

        else if (choice == 4)
        {
            cout << "tu te prommene dans ton village\n";
            cout << "tu encourage les gens a travailler plus fort\n";
            cout << "tu passe devant le marcher e tu demande au marchand combien il a fait\n";
            cout << "le marchand te répond: j'ai fait 1000 pièces d'or\n";
            cout << "tu lui répond: je vais prendre 500 pièces d'or\n";
            cout << "le marchand te répond: d'accord\n";
            myPlayer.argent_collecter += 500;
        }
        cout << "tu retourne chez toi\n";
        cout << "tu te couche dans ton lit\n";
        cout << "tu t'endors\n";

    }
    bool win = fight(myPlayer.hp, myPlayer.attack);
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
    


