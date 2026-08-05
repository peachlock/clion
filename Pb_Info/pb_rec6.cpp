/* 3. Se citeşte un numar natural n.  Afişaţi pe ecran pe cate o linie a ecranului, utilizând subprograme recursive:
a) caţi divizori pari are numarul n
b) produsul cifrelor impare din n
c) suma divizorilor proprii a lui n
e) cati divizori proprii are numarul n
h) mesaj daca numarul este prim sau nu
j) cmmdc-ul dintr numarul n si rasturnatul lui
k) cate numere impare sunt mai mici decat n */

#include <iostream>
using namespace std;

int divpari(int n, int d) {
    if (d > n)
        return 0;
    else if (n % d == 0)
        return 1 + divpari(n, d+2);
        else return divpari(n, d+2);
}

int prodimp(int n) {
    if (n == 0)
        return 1;
    else if ((n % 10) % 2 != 0)
        return n%10 * prodimp(n/10);
        else return prodimp(n/10);
}

int sumadiv(int n, int d) {
    if (d > n/2)
        return 0;
    else if (n % d == 0)
        return d + sumadiv(n, d+1);
        else return sumadiv(n, d+1);
}

int nrdivpro(int n, int d) {
    if (d > n/2)
        return 0;
    else if (n % d == 0)
        return 1 + nrdivpro(n, d+1);
    else return nrdivpro(n, d+1);
}

int prim(int n, int d) {
    if (n <= 1) // 1 si nici un alt nr mai mic decat el nu e prim
        return 0;
    else if (n == 2) // 2 e singurul numar par si prim
        return 1;
    else if ( n % 2 == 0) // daca numarul e par, nu are cum sa fie prim, pt ca are mai multi divizori
        return 0;
    else if ( d > n/2 ) // daca am trecut de jumatate si nr nu mai are alti divizori, inseamna ca e prim
        return 1;
    else if ( n % d == 0 ) // dar daca nr impartit la d, da restul 0, adica daca se imparte exact, inseamna ca mai are si alti divizori
        return 0;
    else return prim(n, d+1); // daca nu e divizor d-ul curent, il verific pe urmatorul
}

int rast(int n, int inv = 0) {
    if (n == 0)
        return inv;
    else return rast( n / 10, inv * 10 + n % 10 );
}

int cmmdc(int a, int b){
    if ( a == b)
        return a;
    else if (a > b)
        return cmmdc(a-b, b);
        else return cmmdc(a, b-a);
}

int imp(int n) {
    if (n <= 0)
        return 0;
    else if (n % 2 != 0)
        return 1 + imp(n-1);
        else return imp(n-1);
}

int main() {
    int  n;
    cin >> n;
    cout << divpari(n, 2) << endl;
    cout << prodimp(n) << endl;
    cout << sumadiv(n, 2) << endl;
    cout << nrdivpro(n, 2) << endl;

    if (prim(n, 2) == 1)
        cout << "Este prim" << endl ;
    else cout << "Nu este prim" << endl;

    // int r = rast(n);
    // int rez= cmmdc(n, r);  putem face asa, SAU
    // cout << rez;

    cout << cmmdc(n, rast(n)) << endl; // asa e mai curat si se poate intelege mai usor ce am facut
    cout << imp(n-1) ;
}