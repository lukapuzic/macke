
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
};

#endif // PEDIGRE_HPP_INCLUDED
