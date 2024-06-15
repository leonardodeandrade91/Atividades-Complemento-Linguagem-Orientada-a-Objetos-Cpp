#include <iostream>
#include <clocale>
#include "Pessoa.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");
    system("title POO Pessoas & color 1f");

    Pessoa *p = new Pessoa();

    p->levantar();

    p->levantar("Chuva");
    p->levantar("Sol");

    p->levantar(10, 30);
    p->levantar(9, 00);
    p->levantar(7, 15);

    p->levantar(true);
    p->levantar(false);

    p->levantar(19.5f);
    p->levantar(23.7f);

    delete p;

    return 0;
}
