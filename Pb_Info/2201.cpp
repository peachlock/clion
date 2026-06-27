//
// Created by Sara Gema on 27.06.2026.
//
/******************************************************************************
Într-un grup sunt n prieteni. Când se întâlnesc se salută, fiecare dând mâna cu toți ceilalți. Câte strângeri de mână au loc?

Date de intrare
Programul citește de la tastatură numărul n.

Date de ieșire
Programul va afișa pe ecran valoarea cerută.
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    cout << (n*(n-1))/2 << endl;

    return 0;
}