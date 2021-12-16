#pragma once
#include "Compte.h"
using namespace Banque;
namespace Banque {
    class Compte_Epargne : public Compte
    {
    private:
        static const double taux_interet;
    public:
        Compte_Epargne(Client* c, Devise* d, double t);
        bool debiter(Devise* M);
        void calculeInteret();
        void consulter()const override;
    };
};