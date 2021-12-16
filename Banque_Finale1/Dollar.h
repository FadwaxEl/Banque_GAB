#pragma once
#include "Devise.h"

#include <iostream>

using namespace std;
namespace Banque {
	class MAD;
	class Euro;
	class Dollar :
		public Devise
	{
	private:
		static const double taux_eur;
		static const double taux_mad;

	public:

		Dollar(double);
		Dollar(const Dollar& s);
		Devise& Clone() const;
		Euro& v_Euro();
		MAD& v_MAD();
		Dollar& v_Dollar();

		void afficher() const override;
	};

};