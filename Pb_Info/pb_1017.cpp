#include <iostream>
using namespace std;

int sumpare(int st, int dr, int v[]) {
    if (st == dr) {
        if (v[st] % 2 == 0)
            return v[st];
        else return 0;
    }
    else {
        int mij = (st + dr) / 2;
        return sumpare(st, mij, v) + sumpare(mij+1, dr, v);
    }
}

int main() {
    int n, v[1001];
    cin >> n;

    for (int i=1; i<=n; i++)
        cin >> v[i];

    cout << sumpare(1, n, v);
}