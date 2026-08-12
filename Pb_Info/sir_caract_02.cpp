/* Se citeste un sir de caractere. Sa se afiseze pe cate o linie a ecranului:
* a) sirul citit
 * b) sirul de la sfarsit la inceput
 * c) cate litere mari sunt in sir
 * d) pozitia literelor mici din sir
 * e) cate caractere spatiu sunt in sir
 * f) suma caracterelor cifra din sir
 * g) sirul dupa ce literele mari s-au transformat in litere mici
 * h) de cate ori apare primul carcter in tot sirul
 * i) pozitia fiecarei aparitii a ultimului caracter in sir*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[100];
    int i, nr;

    cin.getline(s, 100);

    // a)
    cout << s << endl; // afisarea sirului citit

    // b)
    for (i = strlen(s) - 1; i >= 0; i--)
        cout << s[i];
    cout << endl;

    // c)
    nr = 0;
    for ( i = 0; i < strlen(s); i++)
        if (s[i] >= 'A' && s[i] <= 'Z')
            nr++;
    cout << nr << endl;

    // d)
    for (i = 0; i < strlen(s); i++)
        if (s[i] >= 'a' && s[i] <= 'z')
            cout << i << " ";
    cout << endl;

    // e)
    nr=0;
    for (i=0; i< strlen(s); i++)
        if (s[i] == ' ' )
            nr++;
    cout << nr << endl;

}