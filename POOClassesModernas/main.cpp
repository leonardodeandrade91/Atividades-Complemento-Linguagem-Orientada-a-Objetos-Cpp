#include <iostream>
#include <clocale>
#include <memory>
#include <vector>
#include "Carro.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");
    system("title POO Classes em C++ Moderno & color b4");

    vector<unique_ptr<Carro>> car;

    car.emplace_back(new Carro("Corsa", 90));
    car.emplace_back(new Carro("Vectra", 135));
    car.emplace_back(new Carro("Camaro", 200));

    cout << car[0]->nome << " - " << car[0]->potencia << " - " << car[0]->velMax << endl;
    cout << car[1]->nome << " - " << car[1]->potencia << " - " << car[1]->velMax << endl;
    cout << car[2]->nome << " - " << car[2]->potencia << " - " << car[2]->velMax << endl;

    return 0;
}
