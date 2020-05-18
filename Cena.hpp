#ifndef CENA_HPP_INCLUDED
#define CENA_HPP_INCLUDED
class CENA {
protected:
    double cena;
    string valuta;
public:
    CENA(double c=0,string v="RSD"){
	    cena = c;
	    valuta = v;
	}
};

#endif // CENA_HPP_INCLUDED
