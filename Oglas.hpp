#ifndef OGLAS_HPP_INCLUDED
#define OGLAS_HPP_INCLUDED
#include "Macka.hpp"
class Oglas{
protected:
    vector<MACKA*> macke;
public:
    static int ukupanbrojOglasa;
    void dodajMacku()
    {
    	string r,va,pol;
    	PolMacke po;
    	bool ck,v,pas;
    	int d,m,g,c;
    	cout << "rasa: ";
    	cin >> r;
    	cout << "PolMacke: ";
    	cin >> pol;
    	if(pol=="muski" || pol=="musko")
    		po=musko;
    	else
    		po=zensko;
    	cout << "cistokrvnost: ";
    	cin >> ck;
    	cout << "vakcinacija: ";
    	cin >> v;
    	cout << "pasos: ";
    	cin >> pas;
    	cout << "dan: ";
    	cin >> d;
    	cout << "mesec: ";
    	cin >> m;
    	cout << "godina: ";
    	cin >> g;
    	cout << "cena: ";
    	cin >> c;
    	cout << "valuta: ";
    	cin >> va;
    	MACKA* macka=new MACKA(r,po,ck,v,pas,d,m,g,c,va);
    	macke.push_back(macka);
    }
    void ispisiMacke(string rasa="")
    {
    	int brojac=1;
        for(auto i=macke.begin();i!=macke.end();i++)
        {
            if((rasa=="") || ((*i)->getRasa()==rasa))
            {
                cout << brojac << ") " << **i << endl;
                brojac++;
            }
        }
    }
    void obrisiMacku()
    {
    	ispisiMacke();
    	cout << "Obrisi: ";
    	int obrisi;
    	cin >> obrisi;
        obrisi--;
    	macke.erase(macke.begin()+obrisi);
    }
    void pretraziMacke()
    {
        string rasa;
        cout << "Pretraga: ";
        cin >> rasa;
        ispisiMacke(rasa);
    }
};
#endif // OGLAS_HPP_INCLUDED
