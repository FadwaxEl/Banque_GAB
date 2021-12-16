#pragma once
#include "Client.h"
#include "MAD.h"
#include "Euro.h"
#include "Dollar.h"
#include "GC.h"
#include "Devise.h"
#include "OperationR.h"
#include "OperationD.h"
#include <vector>
using namespace Banque;
using namespace Opp;
namespace Banque {
	class Client;
	class Compte
	{
		///attributs
	private:
		const int numCompte;
		static int Compteur;
		Client* titulaire;
		Devise* solde;
		static Devise* plafond;
		GC* ref;
		vector <Operation*> Histo;

	//Methodes 
	public:
		Compte(Client*, Devise*); //avec parametres 
		Compte(const Compte&);
		
		virtual void crediter(Devise* M);
		virtual bool debiter(Devise* M) = 0;
		bool verser(Devise* M, Compte& C);
		
		virtual void consulter()const;
		
		double modif_solde(double);

		~Compte();

	protected: void soldevalue(double);
			   bool check_salary(Devise*) const;











	};

};