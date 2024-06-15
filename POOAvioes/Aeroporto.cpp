#include "Aeroporto.h"

Aeroporto::~Aeroporto() {
    delete this->avi;
}

const Aviao *Aeroporto::getAvi() {
    return this->avi;
}

void Aeroporto::setAvi(Aviao *avi) {
    this->avi = avi;
}
