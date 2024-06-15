#include <iostream>
#include <clocale>
#include "Ventilador.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");
    system("title Exercício POO Estáticos & color 9f");

    Ventilador::ligar(3);
    Ventilador::ligar(2);
    Ventilador::desligar();

    cout << (Ventilador::getLigado() ? "true" : "false") << endl;

    return 0;
}
