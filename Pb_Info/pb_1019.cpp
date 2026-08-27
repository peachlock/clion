#include <iostream>
using namespace std;

int maxim(int st, int dr, int v[]) {
    if (st==dr) {
       return v[st];
    }
    else {
        int mij = (st+dr) / 2;

        int max_st = maxim(st, mij, v);
        int max_dr = maxim(mij + 1, dr, v);

        if (max_st > max_dr)
            return max_st;
        else
            return max_dr;
    }
}

int main() {
    int n, v[1001];

    cin >> n;

    for (int i=1; i<=n; i++)
        cin >> v[i];

    cout << maxim(1, n, v);
}