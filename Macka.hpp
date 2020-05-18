#ifndef MACKA_HPP_INCLUDED
#define MACKA_HPP_INCLUDED
#include "Cena.hpp"
enum PolMacke {musko,zensko};
class MACKA
{
protected:
    string rasa;
    PolMacke pol;
    PEDIGRE pedigre;
    CENA cena;
public:
    MACKA(string r="",PolMacke po=musko, bool ck=false, bool v=false, bool pas=false, int d=1, int m=1, int g=2020,int c=0,string va=""):pedigre(ck,v,pas,d,m,g),cena(c,va){
	    rasa=r;
	    pol=po;
    }
    string getRasa()const{
    	return rasa;
    }
    friend ostream& operator<<(ostream& izlaz, const MACKA& o){
		izlaz<<"MACKA - ispis"<<endl;
		izlaz<<"Rasa: "<<o.rasa<<endl;
		izlaz<<"pol:"<<o.pol<<endl;
		izlaz<<o.pedigre<<endl<<endl;
		return izlaz;
    }
};
class KORISNIK:public MACKA{
protected:
    string username;
    string password;
    bool aktivnost;
    string email;
public:
	KORISNIK(string u="",string pa="",bool a=false,string e="",string r="",PolMacke po=musko, bool ck=false, bool v=false, bool pas=false, int d=1, int m=1, int g=2020):MACKA(r,po,ck,v,pas,d,m,g){
		username=u;
		password=pa;
		aktivnost=a;
		email=e;
	}
};
#endif // MACKA_HPP_INCLUDED
