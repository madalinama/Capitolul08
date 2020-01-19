#include "Persoana.h"
#include <iostream>

using namespace std;

Persoana::Persoana(string prenume,string nume,string materie):_prenume(prenume),_nume(nume),_materie(materie){}

string Persoana::Activitate()
{
    return " cursul  ";

}

std::string Persoana::GetNumeComplet()
{
    return _prenume + _nume;

}

Persoana::~Persoana()
{
    //dtor
}
