#include "Guitarra.h"

void Guitarra::quantCordas() {
    cout << "Guitarra tem " << this->cordas << " Cordas!" << endl;
}

void Guitarra::amplificacao() {
    cout << "Guitarra tem Amplifica��o " << this->tipoAmpli << "!" << endl;
}

Guitarra::Guitarra() {
    this->cordas = 6;
    this->tipoAmpli = "El�trica";
}
