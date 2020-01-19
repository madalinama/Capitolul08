#include <iostream>
#include "Cursant.h"
#include <Persoana.h>
#include "Mentor.h"
using namespace std;

int main()
{
    Mentor theBest("Dumb " ,"Dude ","Spalarea aerului ");
    cout<<theBest.GetNumeComplet()<<endl;
    cout<<theBest.Get_prenume();
    cout<<theBest.Activitate();
    cout<<theBest.Get_materie()<<endl;;
    Cursant chuck ("Chuck ","Norris "," Spalarea aerului ");
    cout<<chuck.GetNumeComplet()<<endl;
    cout<<chuck.Get_prenume();
    cout<<chuck.Activitate();
    cout<<chuck.Get_materie()<<endl;
    cout<<chuck.Get_prenume();
    cout<<chuck.Absolva()<<endl;
    chuck.Set_notaTeme(6);
    chuck.Set_notaTeste(7);
    chuck.Set_notaProiect(6);
    cout<<chuck.Get_prenume();
    cout<<chuck.Absolva()<<endl;
    theBest.SchimbaMentor("Dude ","Dumber ");
    theBest.SchimbaMaterie("Numaratul oilor ");
    cout<<theBest.GetNumeComplet()<<endl;
    cout<<theBest.Get_prenume();
    cout<<theBest.Activitate();
    cout<<theBest.Get_materie()<<endl;
    Cursant obiWan ("Obi Wan ","Kenobi "," Numaratul oilor ");
    cout<<obiWan.GetNumeComplet()<<endl;
    cout<<obiWan.Get_prenume();
    cout<<obiWan.Activitate();
    cout<<obiWan.Get_materie()<<endl;
    cout<<obiWan.Get_prenume();
    cout<<obiWan.Absolva()<<endl;
    obiWan.Set_notaTeme(10);
    obiWan.Set_notaTeste(10);
    obiWan.Set_notaProiect(10);
    cout<<obiWan.Get_prenume();
    cout<<obiWan.Absolva()<<endl;

    cout<<endl;

    return 0;
}
