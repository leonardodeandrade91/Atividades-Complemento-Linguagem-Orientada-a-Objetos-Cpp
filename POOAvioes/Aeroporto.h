#ifndef AEROPORTO_H_INCLUDED
#define AEROPORTO_H_INCLUDED
#include "Aviao.h"

class Aeroporto {
    public:
        Aviao *avi;

        ~Aeroporto();

        const Aviao *getAvi();
        void setAvi(Aviao *avi);
};

#endif // AEROPORTO_H_INCLUDED
