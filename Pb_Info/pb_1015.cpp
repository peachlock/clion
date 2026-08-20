#include <iostream>
using namespace std;

int suma(int st, int dr, int v[]) {
    if (st == dr) {
        return v[st];
    }
    else {
        int mij = (st+dr)/2;
        return suma(st, mij, v) + suma(mij+1, dr, v);
    }
}

int main() {
    int n, v[1001];
    cin >> n;
    for (int i=1; i<=n; i++)
        cin >> v[i];

    cout << suma(1, n, v);
}