#include <iostream>
#include <fstream>

using namespace std;
#include "Macka.hpp"
#include "Cena.hpp"
#include "Datum.hpp"
#include "Hrana.hpp"
#include "Igracke.hpp"
#include "Korisnik.hpp"
#include "Oglas.hpp"
#include "Ogrlice.hpp"
#include "Pedigre.hpp"
#include "Povodci.hpp"
#include "Samponi.hpp"


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
    citajTxt("ime.txt"); //napisi i promeni ime txt fajla
 MACKA m;
 Datum d;
 PEDIGRE p;  
    cout<<m<<endl<<d<<endl<<p<<endl;
    cout<<Oglas::ukupanbrojOglasa;
    return 0;
}
