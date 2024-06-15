#ifndef PESSOA_H_INCLUDED
#define PESSOA_H_INCLUDED
#include <iostream>

using namespace std;

class Pessoa {
    public:
        void levantar();
        void levantar(const char* tempo);
        void levantar(int hora, int minuto);
        void levantar(bool folga);
        void levantar(float temperatura);
};

#endif // PESSOA_H_INCLUDED
