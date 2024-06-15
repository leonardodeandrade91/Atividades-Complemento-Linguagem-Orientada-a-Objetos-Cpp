#include "Violao.h"

void Violao::quantCordas() {
    cout << "Violão tem " << this->cordas << " Cordas!" << endl;
}

void Violao::amplificacao() {
    cout << "Violão tem Amplificação " << this->tipoAmpli << "!" << endl;
}

Violao::Violao() {
    this->cordas = 6;
    this->tipoAmpli = "Acústica";
}
