#ifndef JANTA_H
#define JANTA_H

enum MatJanta {tabla,aluminiu};
class Janta
{
    public:
        Janta();
        Janta(unsigned short nrPrezoane, MatJanta MatJanta,double diametru);
        void SchimbaJanta (MatJanta,double);
        virtual ~Janta();

    protected:

    private:
        unsigned short _nrPrezoane;
        MatJanta _matJanta;
        double _diametru;

};

#endif // JANTA_H
