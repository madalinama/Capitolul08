#include "Cerc.h"

Cerc::Cerc()
{
    //ctor
}
Cerc :: Cerc (double r)
{
    _raza=r;
}

double Cerc::Arie()
{
    return PI*_raza*_raza;
}
Cerc::~Cerc()
{
    //dtor
}
