#ifndef MILITAR_H_INCLUDED
#define MILITAR_H_INCLUDED
#include "Veiculo.h"

class Militar : public Veiculo {
    public:
        int municao;
        bool armamento;

        void imp() override;

        Militar(bool arma, int municao);
};

#endif // MILITAR_H_INCLUDED
