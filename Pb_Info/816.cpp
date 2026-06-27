//
// Created by Sara Gema on 27.06.2026.
//
/******************************************************************************
Scrieți un program care determină câte sticle de x litri cu apă trebuie deschise
pentru a umple un vas de y litri.

Date de intrare
Programul citește de la tastatură numerele naturale x și y.

Date de ieșire
Programul va afișa pe ecran numărul n, reprezentând numărul de sticle ce trebuie
deschise.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    cout << y/x ;

    return 0;
}