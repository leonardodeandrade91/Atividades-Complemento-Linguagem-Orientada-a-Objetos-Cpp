#ifndef CAVAQUINHO_H_INCLUDED
#define CAVAQUINHO_H_INCLUDED
#include "Violao.h"

class Cavaquinho : public Violao {
    public:
        void quantCordas() override;
        void amplificacao() override;

        Cavaquinho();
};

#endif // CAVAQUINHO_H_INCLUDED
