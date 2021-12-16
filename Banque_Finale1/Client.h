#pragma once
#include <iostream>
#include <string>
#include "Compte.h"
#include <vector>
using namespace std;
namespace Banque {
	class Compte;
	class Client
	{
	private:
		string nom;
		string prenom;
		string adress;
		vector <Compte*> lst;
	public:
		Client(string n, string p, string a);
		void ajouter_compte(Compte& C);
		void afficher()const;
		~Client();

	};

};