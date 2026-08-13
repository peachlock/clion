/* Se citeste un sir cu n numere intregi de la tastatura si o valoare k. Utilizând subprograme recursive,
 * afişaţi pe câte o linie ecran:
a) suma elementelor din şirul de numere
b) numărul elementelor pozitive din şirul de numere
c) valoarea minimă din şirul de numere
d) elementele de pe poziţii pare în ordinea apariţiei în şirul de numere
e) elementele de pe poziţii impare în ordinea inversă apariţiei în şirul de numere
f) produsul cifrelor din şirul de caractere
g) suma numerelor divizibile cu 3 din [a,b], a si b se citesc
h) numerele impare din [a,b] în ordine descrescătoare, a si b de la punctul anterior
i) suma divizorilor numărului k
j) divizorii impari ai lui k în ordine crescătoare
k) cifra maximă a numărului k
l) mesaj corespunzător faptului că numărul k este sau nu prim */

#include <iostream>
using namespace std;

// a)
int suma(int n, int v[]) {
    if (n == 0)
        return 0;
    else
        return v[n] + suma(n-1, v);
}

// b)
int pozitive(int n, int v[]) {
    if (n == 0)
        return 0;
    else if (v[n] > 0)
        return 1 + pozitive(n-1, v);
        else
            return pozitive(n-1, v);
}

// c)
int minim(int n, int v[]) {
    if ( n == 0)
        return 999999;
    else if (v[n] < minim(n-1, v))
        return v[n];
        else
            return minim(n-1, v);
}

// d)
void afis_pare(int n, int v[]) {
    if (n > 0) {
        afis_pare(n, v);
        if (n % 2 == 0)
            cout << v[n] << " ";
    }
}

// e)
void afis_impare(int n,int v[]) {
    if (n > 0) {
        if (n % 2 != 0)
            cout << v[n] << " ";
        afis_impare(n, v);
    }
}

// f)
int produs(int n, int v[]) {
    if (n == 0)
        return 1;
    else
        return v[n] * produs(n-1, v);
}

// g)
int suma_div3(int a, int b) {
    if ( b < a)
        return 0;
    else if (b % 3 == 0)
            return b + suma_div3(a, b-1);
        else return suma_div3(a, b-1);
}

// h)
void afis_imp(int a, int b) {
   if ( b >= a) {
       if (b % 2 != 0)
           cout << b << " ";
       afis_imp(a, b-1);
   }
}

// i)
int div_k(int k, int d) {
    if (d > k/2)
        return 0;
    else if (k % d == 0)
            return d + div_k(k, d+1);
        else
            return div_k(k, d+1);
}

// j)


int main() {
    int n, v[101], k;

    cin >> n;

    for (int i=1; i<=n; i++)
        cin >> v[i];

    cout << suma(n, v) << endl;

    cout << pozitive(n, v) << endl;

    cout << minim(n, v) << endl;

    afis_pare(n, v);
    cout << endl;

    cout << produs(n, v) << endl;

    int a, b;
    cin >> a >> b;

    cout << suma_div3(a, b) << endl;

    afis_imp(a, b);
    cout << endl;
}
