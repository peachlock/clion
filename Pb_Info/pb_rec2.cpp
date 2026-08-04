/* Se citeste un nr nat n. Folosind subprograme recursive sa se afiseze:
 * a) suma divizorilor lui n
 * b) cati divizori pari are n
 * c) suma divizorilor proprii a lui n
 * d) divizorii in ordine descrescatoare
 * e) mesaj daca n e nr prim sau nu
 * f) numerele pare mai mici, egale cu n
 * g) al n-lea termen al sirului fibonacci   ex: 1 1 2 3 5 8 13 21 ...
 */

#include <iostream>
using namespace std;

int sumad(int n, int d) {
    if (d > n)
        return 0;
    else if (n % d == 0 )
        return d + sumad(n, d+1);
        else
            return sumad(n, d+1);
}

int divpar(int n, int d) {
    if (d > n)
        return 0;
    else if (n % d == 0)
        return 1 + divpar(n, d+2);
        else return divpar(n, d+2);
}

int proprii(int n, int d) {
    if (d > n/2)
        return 0;
    else if ( n % d == 0)
        return d + proprii(n, d +1);
        else return proprii(n, d+1);
}

void afis(int n, int d) {
    if (d >= 1) {
        if ( n % d == 0)
            cout << d << " ";
        afis(n, d-1);
    }

}


int prim(int n, int d) {
    if (n <= 1)
        return 0;
    else if (n == 2)
        return 1;
        else if ( n % 2 == 0)
            return 0;
        else if (d > n/2)
            return 1;
        else if ( n % d == 0)
            return 0;
        else return prim(n, d+1);
}

void pare(int n) {
    if (n > 0) {
        pare(n-1);
        if (n  % 2 == 0)
            cout << n << " ";
    }
}

int fibo(int n) {
    if ( n == 1 || n == 2)
        return 1;
    else return fibo(n-1) + fibo(n-2);
}

int main() {
    int n;
    cin >> n;
    cout << sumad(n, 1) << endl;
    cout << divpar(n, 2) << endl;
    cout << proprii(n, 2) << endl;
    afis(n, n);
    cout << endl;
    if (prim(n,2) == 1) cout << "Este nr prim" << endl;
        else cout << "Nu este nr prim" << endl;
    pare(n);
    cout << endl;
    cout << fibo(n);
}