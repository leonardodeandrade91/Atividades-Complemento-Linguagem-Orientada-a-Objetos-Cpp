#include "Guitarra.h"

void Guitarra::quantCordas() {
    cout << "Guitarra tem " << this->cordas << " Cordas!" << endl;
}

void Guitarra::amplificacao() {
    cout << "Guitarra tem Amplificação " << this->tipoAmpli << "!" << endl;
}

Guitarra::Guitarra() {
    this->cordas = 6;
    this->tipoAmpli = "Elétrica";
}
