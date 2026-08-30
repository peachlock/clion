/* Înlocuirea vocalelor și numărarea modificărilor

Se citește un text format din litere mici ale alfabetului englez și spații. Scrie un program care înlocuiește fiecare
vocală mică (a, e, i, o, u) cu majuscula ei corespunzătoare (A, E, I, O, U). La final, afișează textul modificat și
numărul total de vocale înlocuite.

Exemplu de intrare: invat sa programez in python

Exemplu de ieșire: InvAt sA prOgrAmEz In pythOn (10 înlocuiri) */

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[256];
    cin.getline(s, 256);

    int n = strlen(s), nr = 0;

    for (int i=0; i< n; i++)
        if (strchr("aeiou", s[i]) != 0)
            if (s[i] >= 'a' && s[i] <= 'z') {
                s[i] = s[i] - 32;
                nr++;
            }

    cout << s << " " << nr ;
}