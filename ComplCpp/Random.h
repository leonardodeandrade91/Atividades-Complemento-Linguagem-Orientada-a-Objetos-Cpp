#ifndef RANDOM_H_INCLUDED
#define RANDOM_H_INCLUDED
#include <cstdlib>
#include <ctime>

class Random {
    public:
        int nextInt(int mini, int maxi);

        Random();
    private:
        int rd;
};

#endif // RANDOM_H_INCLUDED
