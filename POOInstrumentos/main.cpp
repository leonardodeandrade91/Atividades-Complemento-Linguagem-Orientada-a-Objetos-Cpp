#include <iostream>
#include <clocale>
#include "Violao.h"
#include "Cavaquinho.h"
#include "Guitarra.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");
    system("title POO Instrumentos & color 8e");

    Violao *v = new Violao();
    Guitarra *g = new Guitarra();
    Cavaquinho *c = new Cavaquinho();

    v->quantCordas();
    v->amplificacao();

    g->quantCordas();
    g->amplificacao();

    c->quantCordas();
    c->amplificacao();

    delete v;
    delete g;
    delete c;

    return 0;
}
