// Se citeste un vector cu n elemente numere intregi. Folosind subprograme recursive afisati:
// a) vectorul de la sfarsit la inceput
// b) vectorul de la inceput la sfarsit
// c) elementele pare din sir de la inceput la sfarsit
// d) cate elemente pare sunt in sir
// e) de cate ori apare val k in sir, k se citeste
// f) mesaj daca vectorul are macar un element impar sau nu
// g) mesaj daca toate elementele vectorului sunt div cu 3 sau nu
// h) val maxima din sir/vector

#include <iostream>
using namespace std;

void afis(int n, int v[]) {
    if (n>0) {
        cout << v[n] << " ";
        afis(n-1, v);
    }
}

void afis2(int n, int v[]) {
    if (n>0) {
        afis2(n-1, v);
        cout << v[n] << " ";
    }
}

void pare(int n, int v[]) {
    if (n > 0 ) {
        pare(n-1, v);
        if (v[n] % 2 == 0)
            cout << v[n] << " ";
    }
}

int catepare(int n, int v[]) {
    if (n == 0)
        return 0;
    else if (v[n] % 2 == 0)
            return 1 + catepare(n-1, v);
        else return catepare(n-1, v);
}

int catek(int n, int v[], int k) {
    if (n == 0)
        return 0;
    else if (v[n] == k)
            return 1 + catek(n-1, v, k);
        else return catek(n-1, v, k);
}

int impar(int n, int v[]) {
    if (n == 0)
        return 0;
    else if (v[n] % 2 != 0)
          return 1;
        else return impar(n-1, v);
}

int div3(int n, int v[]) {
    if (n == 0)
        return 1;
    else if (v[n] % 3 != 0)
        return 0;
        else return div3(n-1, v);
}

int maxi(int n, int v[]) {
    if ( n == 1 )
        return v[n];
    else {
        int m = maxi(n-1, v);
        if ( m > v[n])
            return m;
        else return v[n];
    }
}

int main() {
    int n, v[101];
    cin >> n;
    for (int i = 1; i<=n; i++)
        cin >> v[i];
    afis(n, v);
    cout << endl;
    afis2(n, v);
    cout << endl;
    pare(n, v);
    cout << endl;
    cout << catepare(n, v) << endl;
    int k;
    cin >> k;
    cout << catek(n, v, k) << endl;

    if ( impar(n, v) == 1)
        cout << "Avem element impar" << endl;
    else
        cout << "Nu avem niciun element impar" << endl;

    if ( div3(n, v) == 1)
        cout << "Toate elementele sunt divizibile cu 3" << endl;
    else
        cout << "Nu toate elementele sunt divizibile cu 3" << endl;

    cout << maxi(n, v);
}