#include "Masina.h"

Masina::Masina(Roata roata1, Roata roata2, Roata roata3, Roata roata4): _roti{roata1,roata2,roata3,roata4}
{
    //ctor
}

short Masina::VerificaRoti()
{
    for (int i=0; i<4; i++)
        if (_roti[i].IsFlat()==1) return 1;
    return -1;
}

void Masina::AfiseazaStareRoti(string marca)
{
    cout <<marca;
    int n=VerificaRoti();
    if (n<0) cout<<" are toate rotile in regula"<<endl;
    else cout<<" are pana la roata "<<++n<<endl;
}

void Masina::UmflaRoti(double presiune)
{
    for (int i=0;i<4;i++)
        _roti[i].UmflaRoata(presiune);
}

void Masina::UmflaRoata(unsigned short i, double presiune)
{
    _roti[i].UmflaRoata(presiune);
}

void Masina::SchimbaRoti(Roata roata1, Roata roata2, Roata roata3, Roata roata4)
{
    _roti[0]=roata1;
    _roti[1]=roata2;
    _roti[2]=roata3;
    _roti[3]=roata4;
}

void Masina::SchimbaRoata(unsigned short i, Roata roata)
{
    _roti[i]=roata;
}

void Masina::AfiseazaTipCauciucuri(string marca)
{
    cout<<marca <<" are cauciucuri";

    if (_roti[0].GetTipAnvelopa()==_roti[1].GetTipAnvelopa()==_roti[2].GetTipAnvelopa()==_roti[3].GetTipAnvelopa())

    switch (_roti[0].GetTipAnvelopa())
    {
        case 0: cout<<" de iarna"; break;
        case 1: cout<<" de vara";break;
        case 2: cout<<" universale";break;
    }
        else
            cout<<" mixte";
     cout<<endl;

}
Masina::~Masina()
{
    //dtor
}
