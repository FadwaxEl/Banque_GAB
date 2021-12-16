#include "Client.h"

using namespace Banque;

Banque::Client::Client(string n, string p, string a)
{
	this->nom = n;
	this->prenom = p;
	this->adress = a;
	this->lst = vector<Compte*>();
}

void Banque::Client::ajouter_compte(Compte& C)
{
	this->lst.push_back(&C);
}



void Banque::Client::afficher() const
{
	cout << "titulaire :" << this->nom << " " << this->prenom << endl;

	for (unsigned int i = 0; i < this->lst.size(); i++)
	{
		this->lst[i]->Compte::consulter();
	}
}
Banque::Client::~Client()
{
	for (int i = 0; i < lst.size(); i++)
	{
		delete lst[i];
		lst[i] = NULL;
	}
}