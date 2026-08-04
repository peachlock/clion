// Se citeste un nnr natural n. Folosind subprogramee recursive, sa se afiseze
// a) suma cifrelor lui n
// b) cifrele lui n
// c) cate cifre pare are n
// d) de cate ori apare cifra c in nr n, cate citeste
// e) produsul cifrelor mai mari dect 4 din n

#include <iostream>
using namespace std;

int suma_cif(int n) {
    if (n==0)
        return 0;
    else return n % 10 + suma_cif(n / 10);
}

void afis(int n) {
    if (n>0) {
        afis(n/10);
        cout << n % 10 << " ";
    }
}

int pare(int n) {
    if (n==0)
        return 0;
    else if (n % 2 == 0)
            return 1 + pare (n/10);
        else return pare (n/10);
}

int apare(int n, int c) {
    if (n == 0 )
        return 0;
    else if (n % 10 == c)
        return 1 + apare(n/10, c);
        else return apare(n/10, c);
}

int prod(int n) {
    if (n == 0)
        return 1;
    else if (n % 10 > 4)
        return n % 10 * prod(n/10);
        else return prod(n/10);
}

int main() {
    int n, c;
    cin >> n;
    cout << suma_cif(n) << endl;
    afis(n);
    cout << endl;
    cout << pare(n) << endl;
    cin >> c;
    cout << apare(n, c) << endl;
    cout << prod(n);
}