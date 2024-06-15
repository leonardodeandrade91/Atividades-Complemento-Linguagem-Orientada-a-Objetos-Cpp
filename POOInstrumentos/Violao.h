#ifndef VIOLAO_H_INCLUDED
#define VIOLAO_H_INCLUDED
#include <iostream>

using namespace std;

class Violao {
    public:
        int cordas;
        const char* tipoAmpli;

        virtual void quantCordas();
        virtual void amplificacao();

        Violao();
};

#endif // VIOLAO_H_INCLUDED
