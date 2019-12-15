#ifndef CILINDRU_H
#define CILINDRU_H
#include "Cerc.h"


class Cilindru
{
    public:
        Cilindru();
        virtual ~Cilindru();
        Cilindru (double r,double inaltime);
        double Volum();
        double Arie();

    protected:

    private:
        Cerc _baza;
        double _inaltime;
};

#endif // CILINDRU_H
