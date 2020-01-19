#include "Mentor.h"
#include<iostream>
using namespace std;

Mentor::Mentor(string prenume, string nume, string materie):Persoana(prenume,nume,materie){}

string Mentor::GetNumeComplet()
{
  return "Mentor: " + Persoana::GetNumeComplet();
}

string Mentor::Activitate()
{
    return "preda " + Persoana::Activitate();
}

void Mentor::SchimbaMaterie(string materie)
{
Set_materie(materie);
}

void Mentor::SchimbaMentor(string nume, string prenume)
{
    Set_nume(nume);
    Set_prenume(prenume);
}

Mentor::~Mentor()
{
    //dtor
}
