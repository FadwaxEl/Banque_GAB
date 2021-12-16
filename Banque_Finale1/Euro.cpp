#include "Devise.h"
#include "MAD.h"
#include "Dollar.h"
#include "Euro.h"
const double Banque::Euro::taux_mad = 8;
const double Banque::Euro::taux_dol = 2;
using namespace Banque;
Banque::Euro::Euro(double val) :Devise(val)
{
}
Banque::Euro::Euro(const Euro& s) : Devise(s)
{
}
Devise& Banque::Euro::Clone() const
{
    return *(new Euro(*this));
}
Dollar& Banque::Euro::v_Dollar()
{
    return *(new Dollar(this->Devise::convertion_totype(taux_dol)));
}

MAD& Banque::Euro::v_MAD()
{
    return *(new MAD(this->Devise::convertion_totype(taux_mad)));
}

Euro& Banque::Euro::v_Euro()
{
    return *(new Euro(*this));
}

void Banque::Euro::afficher() const
{
    this->Devise::afficher();
    cout << "Euro";
}