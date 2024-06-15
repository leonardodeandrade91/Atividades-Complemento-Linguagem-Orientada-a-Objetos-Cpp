#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED
#include <iostream>

using namespace std;

class Aviao {
    public:
        int velocidade;
        string tipo;

        Aviao(int tp);
        ~Aviao();

        void imprimir();

        const int getVelMax();
        void setVelMax(int velMax);
    private:
        int velMax;
};

#endif // AVIAO_H_INCLUDED
