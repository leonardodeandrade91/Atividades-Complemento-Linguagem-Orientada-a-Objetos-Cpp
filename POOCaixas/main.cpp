#include <iostream>
#include <clocale>
#include <typeinfo>
#include "Caixa.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");
    system("title POO Caixas & color 8e");

    Estoque *cx = new Caixa();

    if(typeid(cx) == typeid(Estoque*)) {
        cx->defineLado(5);

        cout << cx->volume() << endl;
    }
    else {
        cerr << "Classe Estoque Não Implementada!" << endl;
    }

    delete cx;

    return 0;
}
