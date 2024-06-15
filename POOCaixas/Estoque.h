#ifndef ESTOQUE_H_INCLUDED
#define ESTOQUE_H_INCLUDED

class Estoque {
    public:
        virtual void defineLado(int l) = 0;
        virtual double volume() = 0;
        virtual ~Estoque() = 0;
};

#endif // ESTOQUE_H_INCLUDED
