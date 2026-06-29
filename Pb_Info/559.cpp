/*
Se dau 5 numere distincte. Să se determine suma celor mai mari 3 dintre ele.

Date de intrare
Programul citește de la tastatură 5 numere naturale.

Date de ieșire
Programul va afișa pe ecran numărul cerut.

Restricții și precizări
cele 5 numere naturale sunt distincte, cuprinse între 1 și 10000, inclusiv
*/

#include <iostream>
using namespace std;
int main () {
   int n=5, v[10];
   for (int i = 1; i <= 5; ++i) {
       cin >> v[i];
   }

    for (int i = 1; i <= n-1; ++i)
        for (int j = i+1; j <= n; ++j)
            if (v[i]>v[j]) swap(v[i],v[j]);

    int sum = 0;
    sum = v[3] + v[4] + v[5];
    cout << sum << endl;

}
