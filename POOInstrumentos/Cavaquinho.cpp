#include "Cavaquinho.h"

void Cavaquinho::quantCordas() {
    cout << "Cavaquinho tem " << this->cordas << " Cordas!" << endl;
}

void Cavaquinho::amplificacao() {
    cout << "Cavaquinho tem Amplifica��o " << this->tipoAmpli << "!" << endl;
}

Cavaquinho::Cavaquinho() {
    this->cordas = 4;
    this->tipoAmpli = "Ac�stica";
}
