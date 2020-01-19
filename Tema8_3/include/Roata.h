#ifndef ROATA_H
#define ROATA_H
#include "Janta.h"
#include "Anvelopa.h"

class Roata
{
    public:
        Roata(Anvelopa,Janta);
        bool IsFlat();
        void SchimbaRoata(Anvelopa, Janta);
        void UmflaRoata (double presiune);
        TipAnvelopa GetTipAnvelopa() {return _anvelopa.Get_tipAnvelopa();}
        virtual ~Roata();

    protected:

    private:
        Anvelopa _anvelopa;
        Janta _janta;
};

#endif // ROATA_H
