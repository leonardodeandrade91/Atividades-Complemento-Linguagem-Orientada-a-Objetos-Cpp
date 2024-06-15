#ifndef GUITARRA_H_INCLUDED
#define GUITARRA_H_INCLUDED
#include "Violao.h"

class Guitarra : public Violao {
    public:
        void quantCordas() override;
        void amplificacao() override;

        Guitarra();
};

#endif // GUITARRA_H_INCLUDED
