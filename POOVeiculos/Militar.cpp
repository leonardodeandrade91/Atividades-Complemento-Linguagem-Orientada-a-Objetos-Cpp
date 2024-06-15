#include "Militar.h"

void Militar::imp() {
    Veiculo::imp();

    cout << "Armamento..: " << this->armamento << endl;
    cout << "Munição....: " << this->municao << endl;
}

Militar::Militar(bool arma, int municao) {
    this->velMax = 150;
    this->rodas = 6;

    this->armamento = arma;
    this->setNome("Tanque");
    this->setCor("Verde");

    if(arma) {
        this->municao = municao;
    }
    else {
        this->municao = 0;
    }
}
