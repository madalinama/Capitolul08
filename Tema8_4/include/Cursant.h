#ifndef CURSANT_H
#define CURSANT_H

#include <Persoana.h>


class Cursant : public Persoana
{
    public:
        Cursant(std::string, std::string, std::string);
        virtual ~Cursant();
        std::string GetNumeComplet();
        std::string Activitate();
        void Set_notaTeme (double notaTeme){_notaTeme=notaTeme;}
        void Set_notaTeste(double notaTeste){_notaTeste=notaTeste;}
        void Set_notaProiect (double notaProiect){_notaProiect=notaProiect;}
        std::string Absolva();

    protected:

    private:
        double _notaTeme,_notaTeste,_notaProiect;
        bool HasGrades();
        bool IsAverageOk ();
};

#endif // CURSANT_H
