#include <iostream>
using namespace std;

int impare(int st, int dr, int v[]) {
    if (st == dr) {
        if (v[st] % 2 != 0)
            return 1;
        else return 0;
    }
    else {
        int mij = (st+dr)/2;
        return impare(st, mij, v) || impare(mij+1, dr, v);
    }
}

int main() {
    int n, v[1001];
    cin >> n;

    for (int i=1; i<=n; i++)
        cin >> v[i];

    if (impare(1, n, v) == 1)
        cout << "DA";
    else cout << "NU";

}