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
    friend ostream& operator<<(ostream& izlaz, const MACKA& o){

izlaz<<"MACKA - ispis"<<endl;

izlaz<<"Rasa: "<<o.rasa<<endl;

izlaz<<"pol:"<<o.pol<<endl;
        
izlaz<<o.pedigre<<endl<<endl;


return izlaz;
    }
};
#endif // MACKA_HPP_INCLUDED
