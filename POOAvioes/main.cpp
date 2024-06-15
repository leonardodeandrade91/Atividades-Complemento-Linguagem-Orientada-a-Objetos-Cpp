#include <iostream>
#include <clocale>
#include "Aviao.h"
#include "Aeroporto.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");
    system("title POO Aviões & color 71");

    Aviao *av = new Aviao(1);

    av->imprimir();

    av->setVelMax(150);

    av->imprimir();

    delete av;

    return 0;
}
