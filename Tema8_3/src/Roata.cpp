#include "Roata.h"

Roata::Roata(Anvelopa manvelopa,Janta mjanta)
{
    _anvelopa=manvelopa;
    _janta=mjanta;
    //ctor
}

bool Roata::IsFlat()
{
    if (_anvelopa.Get_presiune()<1) return true;
    else return false;
}

void Roata::SchimbaRoata(Anvelopa anvelopanoua, Janta jantanoua)
{
    _anvelopa=anvelopanoua;
    _janta=jantanoua;
}

void Roata::UmflaRoata(double presiune)
{
    _anvelopa.UmflaAnvelopa(presiune);
}
Roata::~Roata()
{
    //dtor
}
