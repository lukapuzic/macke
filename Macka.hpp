#ifndef MACKA_HPP_INCLUDED
#define MACKA_HPP_INCLUDED
#include "PEDIGRE.HPP"
enum PolMacke {musko,zensko};
class MACKA
{
protected:
    string rasa;
    PolMacke pol;
    PEDIGRE pedigre;
public:
    MACKA(string i="",  y = musko, bool u, bool i, bool o, int p, int a, int s):pedigre(y,u,i,o,p,a){
    rasa=i;PolMacke
    pol=y;
    }
#endif // MACKA_HPP_INCLUDED
