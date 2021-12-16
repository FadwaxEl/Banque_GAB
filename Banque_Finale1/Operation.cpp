#include "Operation.h"
namespace Opp {
	int Operation::nbop = 0;
	Operation::Operation(Devise* mt) :numop(++nbop)
	{
		this->date = __DATE__;
		this->heure = __TIME__;
		this->montant = mt;
	}

	void Operation::print() const
	{
		cout << "     DATE          HEURE" << endl;
		cout << "  " << this->date << "      " << this->heure << endl;
		cout << "Transaction: " << this->numop << endl;
		cout << "Montant: ";
		this->montant->afficher();
		
		cout << endl;
	}
}