#include "Clasa.h"
#include <iostream>

Clasa::Clasa(unsigned short an,char litera, unsigned short orePeSapt)
{
    _an=an;
    _litera=litera;
    _orePeSapt=orePeSapt;
}

void Clasa::AfiseazaOre()
{
    std::cout<<"Clasa a "<<_an<<_litera<<" : "<<_orePeSapt<<"ore / sapt"<<std::endl;
}

Clasa::~Clasa()
{
    //dtor
}
