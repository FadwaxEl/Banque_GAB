#include "ComptePayant.h"



ComptePayant::ComptePayant(Client* c, Devise* d, Devise* dec) :Compte_courant(c, d, dec)
{
}

void ComptePayant::crediter(Devise* M)
{
	this->Compte::crediter(M);
	Devise& d = *M * 5 / 100;
	this->Compte_courant::debiter(&d);
}

bool ComptePayant::debiter(Devise* M)
{
	if (!this->Compte::debiter(M)) return false;
	Devise& d = *M * 5 / 100;
	this->Compte_courant::debiter(&d);
	return true;

}