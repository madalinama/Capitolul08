#ifndef NORMAPROF_H
#define NORMAPROF_H
#include "Clasa.h"

enum Materie {fizica, matematica, chimie, romana ,sport};

class NormaProf
{
    public:
        NormaProf(Materie materie,Clasa clasa1,Clasa clasa2,Clasa clasa3);
        void AfiseazaOre();
        unsigned short CalculeazaTotalOre();
        virtual ~NormaProf();

    protected:

    private:
        Materie _materie;
        Clasa _clasa1;
        Clasa _clasa2;
        Clasa _clasa3;
};

#endif // NORMAPROF_H
