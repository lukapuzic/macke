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

    Macka p1("Savanska macka", musko, 1300, 117.57, kartica);
    Macka p2("Tortoisehell macka", zensko, 300, 117.57, kes);

    char dugmad;
    do{
        cout<<"Dobrodosli na mjau sajt"<<endl;
        cout<<"Da bi nastavili sa logovanjem pritisnite broj 0"<<endl;
        cout<<"Da napravite novi nalog pritisnite broj 9"<<endl;
        cout<<"Da biste izasli iz programa pritisnite X"<<endl;   
        cin>>b;
        if(b=='1')
        {

        }
        if(b=='2')                             //ovo je sve sto znam
        {

        }
        if(b=='3')
        {
            exit(6);
        }
    }while(b!='1' || b!= '2' || b!='q');




    return 0;
}
