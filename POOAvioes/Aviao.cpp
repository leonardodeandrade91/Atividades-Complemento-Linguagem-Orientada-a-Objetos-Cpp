#include "Aviao.h"

Aviao::Aviao(int tp) {
    if(tp == 1) {
        this->velMax = 800;
        this->tipo = "Jato";
    }
    else if(tp == 2) {
        this->velMax = 350;
        this->tipo = "Monomotor";
    }
    else if(tp == 3) {
        this->velMax = 180;
        this->tipo = "Planador";
    }

    this->velocidade = 0;
}

Aviao::~Aviao() {
    cout << "Objeto Destruído!" << endl;
}

void Aviao::imprimir() {
    cout << "Tipo: " << tipo << endl;
    cout << "Velocidade Máxima: " << velMax << endl;
    cout << "Velocidade Atual: " << velocidade << endl;
    cout << "------------------------------------" << endl;
}

const int Aviao::getVelMax() {
    return velMax;
}

void Aviao::setVelMax(int velMax) {
    this->velMax = velMax;
}
