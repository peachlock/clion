#include <iostream>
using namespace std;

int toate_pare(int st, int dr, int v[]) {
    if (st == dr) {
        if (v[st] % 2 == 0)
            return 1;
        else return 0;
    }
    else {
        int mij = (st+dr) / 2;
        return toate_pare(st, mij, v) && toate_pare(mij+1, dr, v);
    }
}

int main() {
    int n, v[101];
    cin >> n;
    for (int i=1; i<=n; i++)
        cin >> v[i];

    if (toate_pare(1, n, v) == 1)
        cout << "DA";
    else
        cout << "NU";

    return 0;
}