/* Fie x un vector cu n numere intregi. Pentru fiecare cerinta scrieti 3 functii(iterativ, recursiv,
 * divide et impera si apelati in programul principal:
a) afisati minimul elementelor pare din vector
b) cate elemente din vector au cifra zecilor para?
c) Verificati daca vectorul este ordonat crescator si afisati mesaj corespunzator
d) Afisati suma elementelor ce au un numar par de cifre
e) Verificati daca toate elementele din vector au aceeasi paritate(toate pare sau toate impare) si afisati mesaj corespunzator
f) Afisati elementele ce au prima cifra egala cu ultima
g) inlocuti toate valorile ce au cel putin 2 cifre, cu minimul determinat la punctul a) */

#include <iostream>
using namespace std;

// a)
int minim_pare(int n, int x[]) {
    if (n == 0)
        return 99999;
    else if (x[n] % 2 == 0)
            if (x[n] < minim_pare(n-1, x))
                return x[n];
            else
                return minim_pare(n-1, x);
        else return minim_pare(n-1, x);
}

// b)
int cifzeci(int n, int x[]) {
    if (n == 0)
        return 0;
    else if (((x[n] / 10) % 10) %  2 == 0)
            return 1 + cifzeci(n-1, x);
        else return cifzeci(n-1, x);
}

// c)
int ord(int n, int x[]) {
    if (n == 1)
        return 1;
    else if (x[n] < x[n-1])
        return 0;
    else
         return ord(n-1, x);
}

// d)
int nrcifre(int nr) {
    if (nr == 0)
        return 0;
    else if (nr < 10)
            return 1;
    else
        return 1 + nrcifre(nr/10);
}

int catepar(int n, int x[]) {
    if (n == 0)
        return 0;
    else if (nrcifre(x[n]) % 2 == 0 )
            return x[n] + catepar(n-1, x);
        else
            return catepar(n-1, x);
}

// e)
int paritate(int n, int x[]) {
    if (n == 1)
        return 1;
    else if (x[n] % 2 == 0 && x[n-1] % 2 != 0 || x[n] % 2 != 0 && x[n-1] % 2 == 0)
        // if (x[n] % 2 != x[n-1] % 2) asa e mai rapid si mai simplu, face acelasi lucru
         return 0;
    else
        return paritate(n-1, x);
}

// f)
int prima_cif(int nr) {
    if (nr < 0)
        nr = -nr;
    else if (nr < 10)
            return nr;
        else
            return prima_cif(nr/10);
}

void afis(int n, int x[]) {
    if (n > 0) {
        afis(n-1, x);
        if (prima_cif(x[n]) == x[n] % 10)
            cout << x[n] << " ";
    }
}

// g)
void inlocuire(int n, int x[], int min_par) {
    if (n > 0) {
        inlocuire(n-1, x, min_par);

        if (x[n] >= 10 || x[n] <= -10)
            x[n] = min_par;

        cout << x[n] << " ";

    }
}

int main() {
    int n, x[101];

    cin >> n;

    for (int i=1; i<=n; i++)
        cin >> x[i];

    cout << minim_pare(n, x) << endl;

    cout << cifzeci(n, x) << endl;

    if (ord(n, x) == 1)
        cout << "Vectorul este ordonat crescator";
    else
        cout << "Vectorul nu este ordonat crescator";
    cout << endl;

    cout << catepar(n, x) << endl;

    if (paritate(n, x) == 1)
        cout << "Toate elementele din vector au aceeasi paritate";
    else
        cout  << "Nu toate elementele din vector au aceeasi paritate";
    cout << endl;

    afis(n, x);
    cout << endl;

    int min_par = minim_pare(n, x);

    inlocuire(n, x, min_par);

}