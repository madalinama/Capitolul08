#ifndef CERC_H
#define CERC_H
#define PI 3.14


class Cerc
{
    public:
        Cerc();
        virtual ~Cerc();
        Cerc (double r);
        double Get_raza () {return _raza;};
        double Arie ();

    protected:

    private:
       double _raza;
};

#endif // CERC_H
