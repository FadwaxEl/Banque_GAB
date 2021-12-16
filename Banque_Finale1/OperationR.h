#pragma once
#include "Operation.h"
namespace Opp {
    class OperationR :
        public Operation
    {
    public:
        OperationR(Devise* d);
        void print()const;

    };
};