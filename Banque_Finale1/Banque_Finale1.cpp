#include "MAD.h"
#include "Dollar.h"
#include "Euro.h"
#include "OperationD.h"
#include "OperationR.h"
#include "Compte_courant.h"
#include <iostream>

using namespace std;
using namespace Banque;
using namespace Opp;

int main()
{
    cout << "----------------GAB----------------\n";
    /**********************************************/
    //Instanciation
    Devise* D1 = new MAD(5000);
    Devise* Dec = new MAD(50);
    Devise* Dep = new Euro(50);
    Client* Cl = new Client("User1", "User2", "AA1");
    Compte* C = new Compte_courant(Cl, D1, Dec);
    Cl->ajouter_compte(*C);
    Cl->afficher();
    cout << "Apres les opperations \n";
    C->debiter(Dep);
    Cl->afficher();
    //Operation* O1 = new OperationR(D1);
    //O1->print();
    //cout << "\n apres \n";
  
    //D1->afficher();
}

