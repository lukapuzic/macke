
#ifndef OGLAS_HPP_INCLUDED
#define OGLAS_HPP_INCLUDED
#include "Pas.hpp"
#include "Cena.hpp"

class Oglas{
protected:
    Pas pas;
    Cena cena;
public:
    static int ukupanbrojOglasa;
    Oglas(string r, PolPsa p, double c, double k, bool ncP):pas(r,p), cena(c,k,ncP){ukupanbrojOglasa++;}
};
#endif // OGLAS_HPP_INCLUDED
