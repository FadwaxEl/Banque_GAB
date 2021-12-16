#pragma once
#include "Devise.h"
#include <iostream>

using namespace std;
namespace Banque {
	//class Devise;
	class Euro;
	class Dollar;
	class MAD :
		public Devise
	{
	private:
		static const double taux_dol;
		static const double taux_eur;

	public:

		MAD(double);
		MAD(const MAD& s);

		Devise& Clone() const;
		Dollar& v_Dollar();
		Euro& v_Euro();
		MAD& v_MAD();

		void afficher() const override;

		

	};
};