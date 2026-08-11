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
    int i, nr, suma;

    cin.getline(s, 100); // citirea unui sir de caractere cu spatii
    // cin >> s; // citim un cuvant

    // a)
    cout << s << endl; // asa afisam tot sirul odata

    // b)
    for (i = strlen(s) - 1; i >= 0; i--)
        cout << s[i];
    cout << endl;

    // c)
    nr = 0;
    for (i=0; i < strlen(s); i++) // asa parcurgem un sir de caractere
        if (s[i] >= 'A' && s[i] <= 'Z' )
            nr++;
    cout << nr << endl;

    // d)
    for (i=0; i< strlen(s); i++)
        if (s[i] >= 'a' && s[i] <= 'z')
            cout << i << " ";
    cout << endl;

    // e)
    nr = 0;
    for (i=0; i< strlen(s); i++)
        if (s[i] == ' ')
            nr++;
    cout << nr << endl;

    //f)
    suma=0;
    for (i=0; i < strlen(s); i++)
        if ( s[i] >= '0' && s[i] <= '9')
            suma = suma + (s[i] - '0');
    cout << suma << endl;

    // g)
    for (i=0; i < strlen(s); i++)
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
    cout << s << endl;

    // h
    nr=0;
    for (i=0; i< strlen(s); i++)
        if (s[i] == s[0])
            nr++;
    cout << nr << endl;

    //i)
    for (i=0; i< strlen(s); i++)
        if (s[i] == s[strlen(s) - 1])
            cout << i << " ";
}