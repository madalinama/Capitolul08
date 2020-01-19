#include "Cursant.h"
#include<iostream>
using namespace std;

Cursant::Cursant(string prenume, string nume, string materie ):Persoana(prenume, nume, materie)
{
    _notaTeme=0;
    _notaTeste=0;
    _notaProiect=0;
}

string Cursant::GetNumeComplet()
{
  return "Cursant: " + Persoana::GetNumeComplet();
}

string Cursant::Activitate()
{
    return "studiaza " + Persoana::Activitate();
}

bool Cursant::HasGrades()
{
    if ((_notaTeme>0)&&(_notaTeste>0)&&(_notaProiect>0))
        return true;
    return false;
}

bool Cursant::IsAverageOk()
{
    if((_notaTeme+_notaTeste+_notaProiect)/3>=7)
        return true;
    return false;
}

string Cursant::Absolva()
{
    if (HasGrades()==false) return "nu are note suficiente";
     else if (IsAverageOk()==false) return " nu absolva";
          else return " absolva";
}

Cursant::~Cursant()
{
    //dtor
}
