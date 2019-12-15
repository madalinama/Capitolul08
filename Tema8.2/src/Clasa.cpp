#include "Clasa.h"

Clasa::Clasa(unsigned short an,char litera, unsigned short orePeSapt)
{
    _an=an;
    _litera=litera;
    _orePeSapt=orePeSapt;
}

void Clasa::AfiseazaOre()
{
    cout<<"Clasa a "<<_an<<_litera<<" : "<<_orePeSapt<<"ore / sapt"<<endl;
}

Clasa::~Clasa()
{
    //dtor
}
