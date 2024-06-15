#include <iostream>
#include <clocale>
#include "Carro.h"
#include "Moto.h"
#include "Militar.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");
    system("title POO Veículos & color b4");

    Veiculo *c = new Carro();

    c->imp();

    Veiculo *m = new Moto();

    m->imp();

    Veiculo *t = new Militar(true, 500);

    t->imp();

    delete c;
    delete m;
    delete t;

    return 0;
}
