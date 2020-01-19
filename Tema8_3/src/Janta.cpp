#include "Janta.h"

Janta::Janta():_nrPrezoane(5),_matJanta(aluminiu), _diametru(14) {}

Janta::Janta(unsigned short nrPrezoane, MatJanta matJanta,double diametru):_nrPrezoane(nrPrezoane),_matJanta(matJanta),_diametru(diametru){}

void Janta::SchimbaJanta(MatJanta _mmatJanta,double _mdiametru)
{
    _matJanta=_mmatJanta;
    _diametru=_mmatJanta;
}

Janta::~Janta()
{
    //dtor
}
