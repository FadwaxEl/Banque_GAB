#include "Compte_courant.h"
#include <assert.h>
using namespace Banque;
Compte_courant::Compte_courant(Client* c, Devise* d, Devise* dec) :Compte(c, d)
{
	assert(*d >= *dec);
	this->decouvrt = dec;
}

bool Banque::Compte_courant::debiter(Devise* DEV)
{
	assert(this->check_salary(&(*DEV + *this->decouvrt)));
	this->Compte::debiter(DEV);
	return false;
}

void Banque::Compte_courant::consulter() const
{
	this->Compte::consulter();
}