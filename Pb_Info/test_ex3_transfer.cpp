/* Scrieti un program care citeste un sir de caractere de la tastatura si apoi afiseaza pe cate o linie a ecranului:
a) Caracterele de pe pozitii pare din sirul de caractere
b) Cate litere mari sunt in sirul de caractere
c) Mesaj daca sunt doua caractere alaturate ambele cifre in sirul citit
*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[101];
    cin.getline(s, 101);
    int n = strlen(s);

    // a)
    for (int i=0; i < n; i++)
        if (i % 2 == 0)
            cout << s[i];

    cout << endl;

    // b)
    int nr = 0;
    for (int i=0; i< n; i++)
        if (s[i] >= 'A' && s[i] <= 'Z')
            nr++;

    cout << nr << endl;

    // c)
    int ok=0;
    for (int i=0; i < n - 1; i++)
        if (s[i] >= '0' && s[i] <= '9' && s[i+1] >= '0' && s[i+1] <= '9')
            ok = 1;
    if (ok == 1)
        cout << "Sunt doua caractere alaturate ambele cifre in sir";
    else
        cout << "Nu sunt doua caractere alaturate ambele cifre in sir";
}