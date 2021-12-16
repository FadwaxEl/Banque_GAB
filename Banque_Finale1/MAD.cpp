#include "MAD.h"
#include "Euro.h"
#include "Dollar.h"
using namespace Banque;

const double Banque::MAD::taux_eur = 8;
const double Banque::MAD::taux_dol = 2;

MAD::MAD(double val) : Devise(val)
{
}

Banque::MAD::MAD(const MAD& s) : Devise(s)
{

}
Devise& Banque::MAD::Clone() const
{
	return *(new MAD(*this));

}
Dollar& Banque::MAD::v_Dollar()
{
	return *(new Dollar(this->Devise::convertion_totype(taux_dol)));
}

Euro& Banque::MAD::v_Euro()
{
		Euro*d =(new Euro(this->Devise::convertion_totype(MAD::taux_eur)));
		return *d;
}

MAD& Banque::MAD::v_MAD()
{
	return  *(new MAD(*this));
}

void Banque::MAD::afficher() const
{
	this->Devise::afficher();
	cout << "MAD" << endl;
}


