#include "Violao.h"

void Violao::quantCordas() {
    cout << "Viol�o tem " << this->cordas << " Cordas!" << endl;
}

void Violao::amplificacao() {
    cout << "Viol�o tem Amplifica��o " << this->tipoAmpli << "!" << endl;
}

Violao::Violao() {
    this->cordas = 6;
    this->tipoAmpli = "Ac�stica";
}
