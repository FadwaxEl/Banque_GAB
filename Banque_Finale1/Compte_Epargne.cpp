#include "Compte_Epargne.h"

const double Banque::Compte_Epargne::taux_interet = 8;
Compte_Epargne::Compte_Epargne(Client* c, Devise* d, double t) :Compte(c, d)
{
}

bool Banque::Compte_Epargne::debiter(Devise* M)
{
	if (!this->check_salary(M))
		return false;
	this->Compte::debiter(M);
	return true;
}

void Compte_Epargne::calculeInteret()
{
	this->soldevalue(1 - (this->taux_interet / 100));
}

void Banque::Compte_Epargne::consulter() const
{
	this->Compte::consulter();
}