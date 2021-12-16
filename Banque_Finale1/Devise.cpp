#include "Devise.h"
#include  <iostream>
using namespace std;
using namespace Banque;
Devise::Devise(double val)
{
	this->valeur = val;
}

Devise& Devise::operator+(const Devise& M) const
{
	Devise& res = this->Clone();
	double val = M.valeur;
	val += this->valeur;
	res.valeur = val;
	return res;
}

Devise& Devise::operator-(const Devise& M) const
{
	Devise& res = this->Clone();
	double val = M.valeur;
	val -= this->valeur;
	res.valeur = val;
	return res;
}

Devise& Devise::operator*(const Devise& M) const
{
	Devise& res = this->Clone();
	double val = M.valeur;
	val *= this->valeur;
	res.valeur = val;
	return res;
}

Devise& Banque::Devise::operator*(const double d) const
{
	Devise& res = this->Clone();
	res.valeur = this->valeur * d;
	return res;

	// TODO: insérer une instruction return ici
}


Devise& Banque::Devise::operator/(const Devise& M) const
{

	Devise& res = this->Clone();
	double val = M.valeur;
	val /= this->valeur;
	res.valeur = val;
	return res;
}

Devise& Banque::Devise::operator/(const double d) const
{
	Devise& res = this->Clone();
	res.valeur = this->valeur / d;
	return res;
}


bool Devise::operator<=(const Devise& M) const
{
	return this->valeur <= M.valeur;
}

bool Devise::operator>=(const Devise& M) const
{
	return this->valeur >= M.valeur;
}

double Banque::Devise::Clacule_taux(double T) const
{
	return this->valeur * T;
}

void Devise::afficher() const
{
	cout << "le solde est : " << this->valeur << " ";
}

double Devise::convertion_totype(double val) const
{
	return this->valeur * val;
}
