#include "metodos.h"

string trim(string &str) {
    size_t first = str.find_first_not_of(' ');
    size_t last = str.find_last_not_of(' ');

    return str.substr(first, (last - first + 1));
}
