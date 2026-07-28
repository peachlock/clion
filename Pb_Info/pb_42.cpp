#include <iostream>
using namespace std;

void citire(int v[100], int&n, int &i, int &j) {
    cin >> n;
    for (int i=1; i<=n; i++) {
        cin >> v[i];
    }
    cin >> i >> j;
}

void sterge(int v[], int &n, int i, int j) {
    int p = i;
    for (int x = j + 1; x <= n; x++) {
        v[p] = v[x];
        p++;
    }
    n = n - (j - i + 1);
}


int main() {
    int v[100], n, i, j;
    citire(v, n, i, j);
    sterge(v, n, i, j);
    cout << "n= " << n << endl;
    cout << "Noul vector este: ";
    for (int p=1; p<=n; p++) {
        cout << v[p] << " ";
    }
}