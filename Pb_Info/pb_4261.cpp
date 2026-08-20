#include <iostream>
using namespace std;

int AlternDivImp(int a[], int st, int dr) {
    if (st == dr) {
        return 1;
    }
    else {
        int mij = (st+dr)/2;
       if (AlternDivImp(a, st, mij) && AlternDivImp(a, mij+1, dr) && (a[mij]% 2 != a[mij+1] % 2))
           return 1;
        return 0;
    }
}

int main() {
    int n, a[1001];

    cin >> n;

    for (int i=1; i<=n; i++)
        cin >> a[i];

    cout << AlternDivImp(a, 1, n);
}