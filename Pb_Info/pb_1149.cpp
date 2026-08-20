#include <iostream>
using namespace std;


int prim(int n, int d) {
    if (n < 2 )
        return 0;
    else if (d * d > n)
        return 1;
    else if (n % d == 0)
        return 0;
    else
        return prim(n, d+1);
}

int ExistaUnPrim(int st, int dr, int v[]) {
    if (st == dr) {
        return prim(v[st], 2);
    }
    else {
        int mij=(st+dr)/2;
        return ExistaUnPrim(st, mij, v) || ExistaUnPrim(mij+1, dr, v);
    }
}

int main() {
    int n, v[201];

    cin >> n;

    for (int i=1; i<=n; i++)
        cin >> v[i];

    if (ExistaUnPrim(1, n, v) == 1)
        cout << "DA";
    else
        cout << "NU";
}