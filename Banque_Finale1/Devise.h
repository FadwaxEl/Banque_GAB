#pragma once
namespace Banque {
	class MAD;
	class Euro;
	class Dollar;
	class Devise
{
		
	private:
		double valeur;

	public:
		Devise(double val);
		Devise& operator+(const Devise& M) const;
		Devise& operator-(const Devise& M) const;
		Devise& operator*(const Devise& M) const;
		Devise& operator*(const double) const;
		Devise& operator/(const double) const;
        Devise& operator/(const Devise& M) const;

		bool operator<=(const Devise& M)const;
		bool operator>=(const Devise& M) const;

		double Clacule_taux(double)const;
		double convertion_totype(double val) const;

		virtual void afficher() const;

		virtual Devise& Clone() const = 0;
		virtual Dollar& v_Dollar() = 0;
		virtual Euro& v_Euro() = 0;
		virtual MAD& v_MAD() = 0;


};

};