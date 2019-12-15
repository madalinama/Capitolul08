#include "NormaProf.h"

NormaProf::NormaProf(Materie materie,Clasa clasa1, Clasa clasa2,Clasa clasa3):_materie(materie),_clasa1(clasa1),
_clasa2(clasa2),_clasa3(clasa3){}

void NormaProf::AfiseazaOre()
{
    _clasa1.AfiseazaOre();
    _clasa2.AfiseazaOre();
    _clasa3.AfiseazaOre();
}

unsigned short NormaProf::CalculeazaTotalOre()
{
    return ( _clasa1.Get_OreSapt()+_clasa2.Get_OreSapt()+_clasa3.Get_OreSapt());
}
NormaProf::~NormaProf()
{
    //dtor
}
