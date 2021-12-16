#include "OperationR.h"

Opp::OperationR::OperationR(Devise* d) :Operation(d)
{
}

void Opp::OperationR::print() const
{
	cout << "Nature: Debiter " << endl;
	this->Operation::print();
}
