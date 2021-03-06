#ifndef POVODCI_HPP_INCLUDED
#define POVODCI_HPP_INCLUDED
enum BOJE{roze=1, crvena, crna, zuta, bela, zelena};
class Povodci{
protected:
    string marka;
    double duzina;
    string ime;
    BOJE bojapovodca;
    string materijal;
    bool pol;
public:
    Povodci( double d, string i, BOJE b, string mt, bool p)
    {
   
    duzina=d;
    ime=i;
    bojapovodca=b;
    materijal=mt;
    pol=p;
    }
    double getDuzina()
    {
        return duzina;
    }
    string getIme()
    {
        return ime;
    }
    BOJE getBojapovodca()
    {
        return bojapovodca;
    }
    string getMaterijal()
    {
        return materijal;
    }
    bool getPol()
    {
        return pol;
    }

    void povodac()
    {
        if(bojapovodca==1 || bojapovodca==3 || bojapovodca==5)
        pol=true;
        else pol=false;

    }
    void DodajPovodacUFajl()
    {
        ofstream fajl;
        fajl.open ("Povodac.txt", ios_base::app);
        fajl << getDuzina() << ";" << getIme() << ";" << getBojapovodca() << ";" << getMaterijal() << ";" << getPol() <<endl;
        fajl.close();
    }

};
#endif // POVODCI_HPP_INCLUDED
