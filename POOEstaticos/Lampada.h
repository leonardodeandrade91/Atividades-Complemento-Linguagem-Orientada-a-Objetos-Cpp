#ifndef LAMPADA_H_INCLUDED
#define LAMPADA_H_INCLUDED
#include <iostream>

using namespace std;

class Lampada {
    private:
        static bool acesa;
    public:
        static float preco;

        static void custo();
        static void acender();
        static void apagar();
};

#endif // LAMPADA_H_INCLUDED
