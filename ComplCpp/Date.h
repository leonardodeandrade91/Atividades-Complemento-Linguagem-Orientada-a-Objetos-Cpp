#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED
#include <iostream>
#include <chrono>
#include <ctime>

using namespace std;
using namespace chrono;

class Date {
    public:
        string now();
        string week();
        int day();
        int month();
        int year();
        int hours();
        int minutes();
        int seconds();
    private:
        static time_t atual;
        static string semana[7];
        int ds;

        string manip(int quant, const char* tex);
};

#endif // DATE_H_INCLUDED
