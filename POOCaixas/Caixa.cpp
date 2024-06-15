#include "Caixa.h"

void Caixa::defineLado(int l) {
    this->lado = l;
}

double Caixa::volume() {
    return lado * lado * lado;
}

const double Caixa::getLado() {
    return lado;
}

void Caixa::setLado(double lado) {
    this->lado = lado;
}
