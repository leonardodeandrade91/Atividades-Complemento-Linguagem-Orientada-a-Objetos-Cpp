#include "Lampada.h"

float Lampada::preco = 9.50;
bool Lampada::acesa = false;

void Lampada::custo() {
    printf("A l�mpada custa R$ %.2f.\n", preco);
}

void Lampada::acender() {
    cout << "A l�mpada est� acesa!" << endl;
    acesa = true;
}

void Lampada::apagar() {
    cout << "A l�mpada est� apagada!" << endl;
    acesa = false;
}
