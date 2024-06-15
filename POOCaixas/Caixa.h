#ifndef CAIXA_H_INCLUDED
#define CAIXA_H_INCLUDED
#include "Estoque.h"

class Caixa : public Estoque {
    public:
        void defineLado(int l) override;
        double volume() override;

        const double getLado();
        void setLado(double lado);
    private:
        double lado;
};


#endif // CAIXA_H_INCLUDED
