#pragma once
#include "Compte_courant.h"
class ComptePayant : public Compte_courant

{
private:

public:
	ComptePayant(Client* c, Devise* d, Devise* dec);
	void crediter(Devise* M);
	bool debiter(Devise* M);
};
