#include "Pessoa.h"

void Pessoa::levantar() {
    cout << "Vou Levantar da Cama!" << endl;
}

void Pessoa::levantar(const char* tempo) {
    string verif = (string)tempo;

    if(!verif.compare("Chuva") || !verif.compare("Tempestade")) {
        cout << "N�o vou Levantar pra Sair, est� Chovendo!" << endl;
    }
    else {
        cout << "Estou Levantando, o Tempo t� Bom!" << endl;
    }
}

void Pessoa::levantar(int hora, int minuto) {
    if(hora >= 10) {
        cout << "Acordei Muito Tarde!" << endl;
    }
    else if(hora < 8) {
        cout << "Acordei Muito Cedo!" << endl;
    }
    else {
        cout << "Acordei na Hora Certa!" << endl;
    }
}

void Pessoa::levantar(bool folga) {
    if(folga) {
        cout << "Vou Dormir Mais Porque � Folga!" << endl;
    }
    else {
        cout << "Vou Levantar pra Trabalhar!" << endl;
    }
}

void Pessoa::levantar(float temperatura) {
    if(temperatura < 21) {
        cout << "T� Frio Demais pra Levantar!" << endl;
    }
    else {
        cout << "A Temperatura t� Boa, vou Levantar!" << endl;
    }
}
