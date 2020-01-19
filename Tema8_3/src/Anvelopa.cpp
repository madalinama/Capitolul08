#include "Anvelopa.h"

Anvelopa::Anvelopa():_brand ("Michelin"),_presiune (2.2), _tipAnvelopa (vara){}

Anvelopa::Anvelopa(string _mbrand,double _mpresiune,TipAnvelopa _mtipAnvelopa):_brand(_mbrand),_presiune(_mpresiune),_tipAnvelopa(_mtipAnvelopa){}

void Anvelopa::UmflaAnvelopa(double presiune)
{
      if (presiune>3) _presiune=3;
      else _presiune=presiune;
}
Anvelopa::~Anvelopa()
{
    //dtor
}
