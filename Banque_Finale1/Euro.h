#pragma once
#include "Devise.h"
#include <iostream>

using namespace std;
namespace Banque {
	class MAD;
	class Dollar;
	class Euro :
		public Devise
	{
	private:
		static const double taux_dol;
		static const double taux_mad;

	public:

		Euro(double);
		Euro(const Euro& s);

		Devise& Clone() const;
		Dollar& v_Dollar();
		MAD& v_MAD();
		Euro& v_Euro();

		void afficher() const override;
	};

};