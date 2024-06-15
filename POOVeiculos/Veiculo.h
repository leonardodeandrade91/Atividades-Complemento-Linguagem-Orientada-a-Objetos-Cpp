#ifndef VEICULO_H_INCLUDED
#define VEICULO_H_INCLUDED
#include <iostream>

using namespace std;

class Veiculo {
    public:
        int velMax;
        int rodas;

        virtual void imp();

        const char* getNome();
        const char* getCor();
        void setNome(const char* nome);
        void setCor(const char* cor);
    private:
        const char* nome;
        const char* cor;
};

#endif // VEICULO_H_INCLUDED
