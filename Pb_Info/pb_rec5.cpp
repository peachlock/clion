// Scrieţi un program care citeşte 2 numere întregi a şi b şi afişează mesaj dacă cele 2 numere citite
// sunt prime între ele sau nu. Se va utiliza un subprogram recursiv care returnează cmmdc a două numere.

#include <iostream>
using namespace std;

int cmmdc(int a, int b) {
    if (a == b)
        return a;
    else if (a > b)
        return cmmdc(a-b, b);
        else return cmmdc(a, b-a);
}

int main () {
    int a, b;
    cin >> a >> b;
    cout << cmmdc(a, b);
}