  
#ifndef DATUM_HPP_INCLUDED
#define DATUM_HPP_INCLUDED

class Datum{
protected:
    int dan;
    int mesec;
    int godina;
public:
    Datum(int d=1, int m=1, int g=2020)
    {
        dan=d;
        mesec=m;
        godina=g;
    }
    friend ostream& operator<<(ostream& izlaz, const Datum& o){
        izlaz<<"Datum - ispis"<<endl;
        izlaz<<"Dan: "<<o.dan<<endl;
        izlaz<<"Mesec: "<<o.mesec<<endl;
        izlaz<<"Godina: "<<o.godina<<endl<<endl;    
        return izlaz;
    }
};

#endif // DATUM_HPP_INCLUDED
