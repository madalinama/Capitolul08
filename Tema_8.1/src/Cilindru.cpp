#include "Cilindru.h"

Cilindru::Cilindru()
{
    //ctor
}

Cilindru::Cilindru(double r,double inaltime):_baza(r),_inaltime(inaltime){};

double Cilindru::Volum ()
{
    return _baza.Arie()*_inaltime;
}

double Cilindru::Arie()
{
    return 2*_baza.Arie()+2*PI*_baza.Get_raza()*_inaltime;
}
Cilindru::~Cilindru()
{
    //dtor
}
