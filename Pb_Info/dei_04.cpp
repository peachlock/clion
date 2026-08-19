/* Se citeste un vector cu n elemente nr intregi. Folosind subprograme dei sa se afiseze pe cate o linie a ecranului
 a) produsul elementelor divizibile cu 3 din vector
 b) cate elemente pare sunt pe pozitii impare in vector
 c) elementele multiplu de k din vector, k se citeste de la tastatura
 d) de cate ori apare primul element in tot vectorul */

#include <iostream>
using namespace std;

int proddiv3(int st, int dr, int v[]) {
    if (st == dr)
        if (v[st] % 3 == 0)
            return v[st];
        else return 1;
    else {
        int mij=(st+dr)/2;
        return proddiv3(st, mij, v) * proddiv3(mij+1, dr, v);
    }
}

int pare(int st, int dr, int v[]) {
    if (st == dr)
        if (st % 2 != 0 && v[st] % 2 == 0)
            return 1;
        else return 0;
    else {
        int mij=(st+dr)/2;
        return pare(st, mij, v) + pare(mij+1, dr, v);
    }
}

void multiplu(int st, int dr, int v[], int k) {
    if (st == dr) {
        if ( v[st] % k == 0)
            cout << v[st] << " ";
    }
    else {
        int mij=(st+dr)/ 2;
        multiplu(st, mij, v, k);
        multiplu(mij+1, dr, v, k);
    }
}

int apare(int st, int dr, int v[]) {
    if (st == dr)
        if (v[st] == v[1])
            return 1;
        else return 0;
    else {
        int mij=(st+dr)/ 2;
        return apare(st, mij, v) + apare(mij+1, dr, v);
    }
}

int main() {
    int n, k, v[100], i;
    cin >> n;
    for (i=1; i<=n; i++)
        cin >> v[i];

    cout << proddiv3(1, n, v) << endl;

    cout << pare(1, n, v) << endl;

    cin >> k;

    multiplu(1, n, v, k);
    cout << endl;

    cout << apare(1, n, v);
}
