#include "Compte.h"

using namespace Banque;
using namespace Opp;
Devise* Compte::plafond = new MAD(2000);
int Compte::Compteur = 0;

Banque::Compte::Compte(Client* titu, Devise* sol) :numCompte(++Compteur)
{
	this->ref = new GC(1);
	this->titulaire = titu;
	this->solde = sol;

}

Banque::Compte::Compte(const Compte& c) :numCompte(c.numCompte)
{
	this->ref = c.ref;
	this->solde = c.solde;
	this->ref->incre();
	this->titulaire = c.titulaire;
}

void Banque::Compte::crediter(Devise* M)
{

	if (typeid(*(this->solde)) == typeid(MAD))
    	*(this->solde) = *(this->solde) + M->v_MAD();
	else
	    if (typeid(*(this->solde)) == typeid(Euro))	
	   *(this->solde) = *(this->solde) + M->v_Euro();

	if (typeid(*(this->solde)) == typeid(Dollar))	
	   *(this->solde) = *(this->solde) + M->v_Dollar();

	Histo.push_back(new OperationR(M));

}

bool Banque::Compte::debiter(Devise* M)
{
	if ( M->v_MAD() <= *(Compte::plafond))
	{
		if (typeid(*(this->solde)) == typeid(MAD))
		{
			if (*this->solde >= M->v_MAD())
			*(this->solde) =  M->v_MAD() - *(this->solde) ;
		}
		if (typeid(*(this->solde)) == typeid(Euro))
		{
			if (*this->solde >= M->v_Euro())
				*(this->solde) = M->v_Euro() - * (this->solde) ;
		}
		if (typeid(*(this->solde)) == typeid(MAD))
		{
			if (*this->solde >= M->v_Dollar())
				*(this->solde) = M->v_Dollar() - *(this->solde);
		}

		Histo.push_back(new OperationD(M));
		return true;
	}

	return false;
}

bool Banque::Compte::verser(Devise* M, Compte& C)
{
	if (this->debiter(M)) {
		C.crediter(M);
		return true;
	}
	return false;
}

void Banque::Compte::consulter() const
{
	cout << "numero compte:" << this->numCompte << endl;
	this->solde->afficher();
	for (unsigned int i = 0; i < this->Histo.size(); i++)
	{

		this->Histo[i]->Operation::print();
	}

}

double Banque::Compte::modif_solde(double val)
{
	return this->solde->Clacule_taux(val);
}

Compte::~Compte() {

	if (this->titulaire != nullptr && this->ref->decr() == 0)
	{
		delete this->titulaire;
		this->titulaire = nullptr;
	}

}

void Banque::Compte::soldevalue(double d)
{
   *(this->solde) = *(this->solde) - *(this->solde) * (d / 100);
}

bool Banque::Compte::check_salary(Devise* d) const
{
	return *this->solde >= *d / 2;
}

