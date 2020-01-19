#ifndef PERSOANA_H
#define PERSOANA_H
#include <iostream>

class Persoana
{
    public:
        Persoana (std::string, std::string, std::string);
        virtual ~Persoana();
        std::string Activitate();
        std::string Get_materie(){ return  _materie;}
        std::string Get_prenume(){ return  _prenume;}

    protected:
        std::string GetNumeComplet();
        void Set_nume (std::string nume){_nume=nume;}
        void Set_materie (std::string materie){_materie=materie;}
        void Set_prenume (std::string prenume){_prenume=prenume;}

    private:
       std::string _prenume,_nume,_materie;
};

#endif // PERSOANA_H
