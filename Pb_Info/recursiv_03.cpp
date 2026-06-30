#include <iostream>
using namespace std;

void afisareinvers(int a[], int n) {
    if (n!=0) {
        cout << a[n] << " ";
        afisareinvers(a, n-1);
    }
}

int main () {
    int n, a[101];
    cin >> n;
    for (int i=1; i<=n; i++) {
        cin >> a[i];
    }
    afisareinvers(a, n);
    return 0;
}