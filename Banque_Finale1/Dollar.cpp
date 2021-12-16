#include "Devise.h"
#include "Dollar.h"
#include "Euro.h"
#include "MAD.h"
const double Banque::Dollar::taux_eur = 8;
const double Banque::Dollar::taux_mad = 2;
using namespace Banque;
Banque::Dollar::Dollar(double val) :Devise(val)
{
}

Banque::Dollar::Dollar(const Dollar& s) : Devise(s)
{
}

Devise& Banque::Dollar::Clone() const
{
	return *(new Dollar(*this));
}

Euro& Banque::Dollar::v_Euro()
{
	return *(new Euro(this->Devise::convertion_totype(taux_eur)));
}

MAD& Banque::Dollar::v_MAD()
{
	return *(new MAD(this->Devise::convertion_totype(taux_mad)));
}

Dollar& Banque::Dollar::v_Dollar()
{
	return *(new Dollar(*this));
}

void Banque::Dollar::afficher() const
{
	this->Devise::afficher();
	cout << "Dollar";
}