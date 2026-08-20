#include <iostream>
using namespace std;

int suma(int st_lin, int dr_lin, int v[][101], int m) {
    if (st_lin == dr_lin) {
        int s_linie = 0;
        for (int j = 1; j <= m; j++) {
            if (v[st_lin][j] % 2 == 0) {
                s_linie += v[st_lin][j];
            }
        }
        return s_linie;
    }
    else {
        int mij_lin =(st_lin + dr_lin)/2;
        return suma(st_lin, mij_lin, v, m) + suma(mij_lin +1, dr_lin, v, m);
    }
}

int main() {
    int m, n, v[101][101];
    cin >> m; // nr de linii
    cin >> n; // nr de coloane

    for(int i=1; i<= m; i++)
        for (int j=1; j<=n; j++)
            cin >> v[i][j];

    cout << suma(1, m, v, n);
}