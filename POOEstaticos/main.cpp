#include <iostream>
#include <clocale>
#include "Lampada.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");
    system("title POO Est�ticos & color f1");

    Lampada::preco = 7.25;

    Lampada::custo();

    Lampada::acender();
    Lampada::apagar();

    return 0;
}
