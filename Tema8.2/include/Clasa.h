#ifndef CLASA_H
#define CLASA_H


class Clasa
{
    public:
        Clasa(unsigned short an,char litera, unsigned short orePeSapt);
        void AfiseazaOre();
        unsigned short Get_OreSapt() {return _orePeSapt;};

        virtual ~Clasa();

    protected:

    private:
        unsigned short _an;
        char _litera;
        unsigned short _orePeSapt;
};

#endif // CLASA_H
