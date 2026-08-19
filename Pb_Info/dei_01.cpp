/* Scrieti un program care citeste din fisierul intrare.txt de pe prima linie un nr n iar de pe a doua linie un sir de n
nr intregi. Folosind suprograme dei sa se afisieze pe cate o linie a ecranului:
a) elementele vectorului
b) suma elementelor pare din vector
c) cate elemente div cu 3 sunt in vector
d) elementele de pe poz impare */

#include <iostream>
#include <fstream>
using namespace std;

// a)
void afis(int st, int dr, int v[]) {
    if (st==dr) {
        cout << v[st] << " ";
    }
    else {
        int mij=(st+dr)/2;
        afis(st, mij, v);
        afis(mij+1, dr, v);
    }
}

int suma(int st, int dr, int v[]) {
    if (st==dr)
        if (v[st] % 2 == 0)
            return v[st];
        else return 0;
    else {
        int mij=(st+dr) /2;
        return suma(st, mij, v) + suma(mij+1, dr, v);
    }
}

// ex: daca n=4 si v=(1 2 3 4)
// suma(1, 4, v) = suma(1, 2, v) + suma(3, 4, v) = 2 + 4 = 6
// suma (1, 2, v) = suma(1, 1, v) + suma(2, 2, v) = 0 + 2 = 2
// suma(3, 4, v) = suma(3, 3, v) + suma(4, 4, v) = 0 + 4 = 4

int div3(int st, int dr, int v[]) {
    if (st == dr)
        if (v[st] % 3 == 0)
            return 1;
        else return 0;
    else {
        int mij=(st+dr)/ 2;
        return div3(st, mij, v) + div3(mij+1, dr, v);
    }
}

void imp(int st, int dr, int v[]) {
    if (st==dr) {
        if (st % 2 != 0)
            cout << v[st] << " ";
    }
    else {
        int mij=(st+dr)/2;
        imp(st, mij, v);
        imp(mij+1, dr, v);
    }
}

int main () {
    ifstream fin("intrare.txt");
    int n, v[101], i;

    fin >> n;
    for (i=1; i<=n; i++)
        fin >> v[i];

    afis(1, n, v);
    cout << endl;

    cout << suma(1, n, v) << endl;

    cout << div3(1, n, v) << endl;

    imp(1, n, v);

}