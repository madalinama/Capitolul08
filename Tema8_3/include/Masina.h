#ifndef MASINA_H
#define MASINA_H
#include "Roata.h"


class Masina
{
    public:
        Masina(Roata,Roata,Roata,Roata);
        void AfiseazaStareRoti (string);
        void UmflaRoti (double);
        void UmflaRoata (unsigned short, double);
        void SchimbaRoti (Roata,Roata,Roata,Roata);
        void SchimbaRoata (unsigned short, Roata);
        void AfiseazaTipCauciucuri (string);
        virtual ~Masina();

    protected:

    private:
        Roata _roti[4];
        short VerificaRoti();
};

#endif // MASINA_H
