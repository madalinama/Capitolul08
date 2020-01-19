#ifndef ANVELOPA_H
#define ANVELOPA_H
#include <iostream>

using namespace std;

enum TipAnvelopa {iarna,vara,universal};

class Anvelopa
{
    public:
        Anvelopa();
        Anvelopa(string _mbrand,double _mpresiune,TipAnvelopa _mtipAnvelopa);
        float Get_presiune (){return _presiune;};
        TipAnvelopa Get_tipAnvelopa () {return _tipAnvelopa;};
        void UmflaAnvelopa (double presiune);
        virtual ~Anvelopa();

    protected:

    private:
        string _brand;
        double _presiune;
        TipAnvelopa _tipAnvelopa;
};

#endif // ANVELOPA_H
