#ifndef MENTOR_H
#define MENTOR_H

#include <Persoana.h>


class Mentor : public Persoana
{
    public:
        Mentor (std::string, std::string, std::string);
        std::string GetNumeComplet();
        std::string Activitate();
        void SchimbaMaterie (std::string);
        void SchimbaMentor (std::string, std::string);
        virtual ~Mentor();

    protected:

    private:
};

#endif // MENTOR_H
