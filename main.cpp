#include <iostream>
#include <fstream>

using namespace std;
#include "Macka.hpp"//inkluduj sve klase

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
    citajTxt("ime.txt"); //
 MACKA m;
 Datum d;
 PEDIGRE p;  
    cout<<m<<endl<<d<<endl<<p<<endl;
    return 0;
}
