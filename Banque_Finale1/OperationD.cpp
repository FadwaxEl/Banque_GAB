#include "OperationD.h"

Opp::OperationD::OperationD(Devise* d) :Operation(d)
{
}

void Opp::OperationD::print() const
{

	cout << "Nature: Debiter ";
	this->Operation::print();
}