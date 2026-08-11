/* Se citeste un sir de caractere. Sa se afiseze pe cate o linie a ecranului folosind subprograme recursive:
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

// a)
void afis(int n, char s[]) {
    if (n >= 0) {
        afis(n-1, s);
        cout << s[n];
    }
}

// b)
void afisinv(int n, char s[]) {
    if (n >= 0) {
        cout << s[n];
        afisinv(n-1, s);
    }
}

//c)
int mari(int n, char s[]) {
    if (n < 0)
        return 0;
    else if (s[n] >= 'A' && s[n] <= 'Z')
        return 1 + mari(n-1, s);
        else return mari(n-1, s);
}

// d)
void poz(int n, char s[]) {
    if (n >= 0) {
        poz(n-1, s);
        if (s[n] >= 'a' && s[n] <= 'z')
            cout << n << " ";
    }
}

// e)
int spatiu(int n, char s[]) {
    if (n < 0)
        return 0;
    else if (s[n] == ' ')
            return 1 + spatiu(n-1, s);
        else
            return spatiu(n-1, s);
}

// f)
int suma(int n, char s[]) {
    if ( n < 0)
        return 0;
    else if (s[n] >= '0' && s[n] <= '9')
            return (s[n] - '0') + suma(n-1, s);
        else
            return suma(n-1, s);
}

//g)
void sirul(int n, char s[]) {
    if (n >= 0) {
        if (s[n] >= 'A' && s[n] <= 'Z')
            s[n] = s[n] + 32;
        sirul(n-1, s);
    }
}

// h)
int apare(int n, char s[]) {
    if (n < 0)
         return 0;
    else if (s[n] == s[0])
            return 1 + apare(n-1, s);
        else return apare(n-1, s);
}

// i)
void pozitia(int n, char s[]) {
    if (n >= 0) {
        pozitia(n-1, s);
        if (s[n] == s[strlen(s) - 1])
            cout << n << " ";
    }
}

int main() {
    char s[101];

    cin.getline(s, 101);

    afis(strlen(s)-1, s);
    cout << endl;

    afisinv(strlen(s)-1, s);
    cout << endl;

    cout << mari(strlen(s)-1, s) << endl;

    poz(strlen(s)-1, s);
    cout << endl;

    cout << spatiu(strlen(s)-1, s) << endl;

    cout << suma(strlen(s)-1, s) << endl;

    sirul(strlen(s)-1, s);
    afis(strlen(s)-1, s);
    cout << endl;

    cout << apare(strlen(s)-1, s) << endl;

    pozitia(strlen(s)-1, s);

}