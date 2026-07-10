#include <iostream>
using namespace std;

void citire (int&n) {
    cin >> n;
}

int cmmnr (int n) {
    if (n == 0) {
        return 0;
    }

    int v[10];
    int nrcif = 0;

    while ( n > 0 ) {
        v[nrcif] = n % 10;
        nrcif++;
        n = n / 10;
    }

    for (int i = 0; i <= nrcif - 1; i++) {
        for (int j = i + 1; j < nrcif; j++) {
            if ( v[i] > v[j]) {
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }

    if (v[0] == 0 && nrcif > 1) {
        int primuNonZero = 1;
        while (primuNonZero < nrcif && v[primuNonZero] == 0) {
            primuNonZero++;
        }
        // Daca am gasit o cifra mai mare decat 0 (de ex: in [0, 0, 2, 5], o gaseste pe 2)
        if (primuNonZero < nrcif) {
            int aux = v[0];
            v[0] = v[primuNonZero];
            v[primuNonZero] = aux;
        }
    }

    int rezultat = 0;
    for ( int i = 0; i < nrcif; i++) {
        rezultat = rezultat * 10 + v[i];
    }
    return rezultat;
}


int main() {
    int n;

    citire(n);
    cout << cmmnr(n) << endl;

    return 0;
}