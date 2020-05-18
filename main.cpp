#include <iostream>
#include <algorithm>
#include <string>
#include <fstream>
#include <cstdlib>
#include <vector>
using namespace std;
#include "Datum.hpp"
#include "Hrana.hpp"
#include "Igracke.hpp"
#include "Ogrlice.hpp"
#include "Povodci.hpp"
#include "Pedigre.hpp"
#include "Oglas.hpp"
int Oglas::ukupanbrojOglasa=0;
void citajTxt(string nazivFajla)
{
    string linija;
    ifstream fajl (nazivFajla);
    if (fajl.is_open())
    {
        while ( getline (fajl,linija) )
        {
            cout << linija << '\n';
        }
        fajl.close();
    }

    else
        cout << "Neuspesno otvoren fajl";
}
int main()
{
    citajTxt("macke.txt"); //napisi i promeni ime txt fajla
    Oglas o;
    o.dodajMacku();
    o.dodajMacku();
    o.ispisiMacke();
    o.pretraziMacke();
    o.obrisiMacku();
    o.ispisiMacke();
    return 0;
}
