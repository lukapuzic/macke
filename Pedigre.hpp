
#ifndef PEDIGRE_HPP_INCLUDED
#define PEDIGRE_HPP_INCLUDED
struct Datum
{
    int mesec
    int dan
    int godina
}
class PEDIGRE
{
protected:
    bool cistokrvnost;
    Datum datumrodjenja
    bool vakcinacija;
    bool pasos;
    bool papiri;
public:
    PEDIGRE(bool u = true, bool i = true , bool o = true, int p = 1, int a = 1, int s = 2020)
    {
        cistokrvnost=u;
        vakcinacija=i;
        pasos=o;
        datumrodjenja.dan=p; ;
        datumrodjenja.mesec=a;
        datumrodjenja.godina=s;
    }
    friend ostream& operator<<(ostream& izlaz, const PEDIGRE& o){

izlaz<<"Pedigre - ispis"<<endl;

izlaz<<"cistokrvnost: "<<o.cistokrvnost<<endl;

izlaz<<o.datumrodjenja<<endl;
        
izlaz<<"vakcinacija: "<<o.vakcinacija<<endl;       
        
izlaz<<"pasos: "<<o.pasos<<endl;
        
izlaz<<"papiri: "<<o.papiri<<endl;

return izlaz;

}

};

#endif // PEDIGRE_HPP_INCLUDED
