#pragma once
#include "Operation.h"
namespace Opp {
    class OperationD :
        public Operation
    {
    public:
        OperationD(Devise* d);
        void print()const;

    };
};