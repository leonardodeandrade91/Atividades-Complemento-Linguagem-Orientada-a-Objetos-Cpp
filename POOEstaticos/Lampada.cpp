#include "Lampada.h"

float Lampada::preco = 9.50;
bool Lampada::acesa = false;

void Lampada::custo() {
    printf("A lâmpada custa R$ %.2f.\n", preco);
}

void Lampada::acender() {
    cout << "A lâmpada está acesa!" << endl;
    acesa = true;
}

void Lampada::apagar() {
    cout << "A lâmpada está apagada!" << endl;
    acesa = false;
}
