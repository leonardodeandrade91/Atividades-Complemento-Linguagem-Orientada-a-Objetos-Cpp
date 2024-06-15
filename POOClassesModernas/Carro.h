#ifndef CARRO_H_INCLUDED
#define CARRO_H_INCLUDED

class Carro {
    public:
        int velMax;
        int potencia;
        const char* nome;

        Carro(const char* n, int p): nome(n), potencia(p) {
            if(p < 100) {
                this->velMax = 120;
            }
            else if(p < 200) {
                this->velMax = 220;
            }
            else {
                this->velMax = 350;
            }
        }
};

#endif // CARRO_H_INCLUDED
