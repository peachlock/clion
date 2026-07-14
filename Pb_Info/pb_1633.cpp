#include <iostream>
using namespace std;

void citire (int&n) {
    cin >> n;
}

void dublare1(int &n) {
    int copie = n;
    int p = 10; // pt ca prima cifra sa fie impinsa cu o pozitie mai in fatat decat restul numarului
    while (copie > 9) {
        copie = copie / 10;
        p = p * 10;
    }
    int primacifra = copie;
    n = primacifra * p + n; // sau am putea initializa p = 1 la inceput si abia aici sa imnultim p * 10
}

int main () {
    int n;
    citire(n);
    dublare1(n);
    cout << n << endl;
}