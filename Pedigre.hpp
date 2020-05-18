#ifndef PEDIGRE_HPP_INCLUDED
#define PEDIGRE_HPP_INCLUDED
class PEDIGRE
{
protected:
    bool cistokrvnost;
    Datum datumrodjenja;
    bool vakcinacija;
    bool pasos;
public:
    PEDIGRE(bool ck = true, bool v = true , bool pas = true, int d = 1, int m = 1, int g = 2020):datumrodjenja(d,m,g)
    {
        cistokrvnost=ck;
        vakcinacija=v;
        pasos=pas;
    }
    friend ostream& operator<<(ostream& izlaz, const PEDIGRE& o){
        izlaz<<"Pedigre - ispis"<<endl;
        izlaz<<"cistokrvnost: "<<o.cistokrvnost<<endl;
        izlaz<<o.datumrodjenja<<endl;     
        izlaz<<"vakcinacija: "<<o.vakcinacija<<endl;            
        izlaz<<"pasos: "<<o.pasos<<endl;  
        return izlaz;
    }

};

#endif // PEDIGRE_HPP_INCLUDED
