#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

enum Domino {pito = 1, duque, terno, quadra, quina, sena};

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "portuguese");
    system("title Praticando C++ & color 0A");

    Domino dados;

    for(int i = pito; i <= sena; i++) {
        cout << i << endl;
    }

    return 0;
}
