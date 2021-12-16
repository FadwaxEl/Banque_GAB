#pragma once
#include "Compte.h"
namespace Banque {
    class Compte_courant : public Compte
    {
    public:

        Compte_courant(Client* c, Devise* d, Devise* dec);
        bool debiter(Devise* M);
        void consulter()const override;
        // bool debiter(Devise* DEV);//
    private:
        Devise* decouvrt;

    };
};