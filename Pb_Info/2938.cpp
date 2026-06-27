/******************************************************************************

Într-un stup, pe un fagure de miere infinit, trăiește o albină foarte harnică.
Fagurele este alcătuit din celule hexagonale, fiecare celulă având șase vecini.
În prima zi albina depune nectar într-o singură celulă. În fiecare din zilele
următoarele, albina depune nectar în celulele vecine cu cele în care a fost deja
depus nectar. Aflați în câte celule este depus nectar după n zile.

Date de intrare
Programul citește de la tastatură numărul n.

Date de ieșire
Programul va afișa pe ecran numărul C, reprezentând numărul de celule în care este
depus nectar după n zile.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;

    cout << 1+ (6*((n*(n-1))/2)) << endl;

    return 0;
}//
// Created by Sara Gema on 27.06.2026.
//
