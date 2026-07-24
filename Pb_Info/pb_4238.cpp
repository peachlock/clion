#include <iostream>
using namespace std;

void citire(int a[1001], int&n) {
    cin >> n;
    for (int i=1; i<=n; i++) {
        cin >> a[i];
    }
}

int NrZero(int a[], int n) {
    int cnt=0;
    for (int i=1; i<=n; i++) {
        if (a[i] % 2 == 0) {
            if (a[i] == 0 ) {
                cnt++;
            } else {
                break;
            }
        }
    }
    return cnt;
}

int main () {
    int a[101], n;
    citire(a, n);
    cout << "Numarul de zerouri: " << NrZero(a,n) << endl;
}