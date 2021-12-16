#pragma once
#include "Devise.h"
#include <iostream>

using namespace std;
using namespace Banque;
namespace Opp {
	class Operation
	{
	private:
		Devise* montant;
		int static nbop;
		const int numop;
		string date;
		string heure;
		
	public:
		Operation(Devise* mt);
		virtual void print()const = 0;

	};
}
