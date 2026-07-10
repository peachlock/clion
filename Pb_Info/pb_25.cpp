#include <iostream>
using namespace std;

void citire(int &n) {
    cin >> n;
}

int cmmnr (int n) {
    if (n == 0) {
        return 0;
    }

    int v[10]; // introducem un vector pt cifrele numarului
    int nrcif = 0; // introducem un contor pt a sti cate cifre are vetorul/numarul

    // Pasul 1: Compunem vectorul cu cifrele numarului
    while (n > 0) {
        v[nrcif] = n % 10;
        nrcif ++;
        n = n/10;
    }

    // Pasul 2: Ordonam vectorul in ordine descrescatoare
    for (int i=0; i <= nrcif - 1; i++) {
        for (int j = i + 1; j < nrcif; j++) {
            if (v[i] < v[j]) {
               int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }

    // Pasul 3: Reconstruim numarul din cifrele sortate
    int rezultat = 0;
    for (int i = 0; i < nrcif; i++) {
        rezultat = rezultat * 10 + v[i];
    }
    return rezultat;
}

int main () {
    int n;
    citire(n);
    cout << cmmnr(n) << endl;

    return 0;
}