#include "Veiculo.h"

void Veiculo::imp() {
    cout << "Nome.......: " << this->getNome() << endl;
    cout << "Cor........: " << this->getCor() << endl;
    cout << "Rodas......: " << this->rodas << endl;
    cout << "Vel Máx....: " << this->velMax << endl;
}

const char* Veiculo::getNome() {
    return this->nome;
}

const char* Veiculo::getCor() {
    return this->cor;
}

void Veiculo::setNome(const char* nome) {
    this->nome = nome;
}

void Veiculo::setCor(const char* cor) {
    this->cor = cor;
}
