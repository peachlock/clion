#include <iostream>
using namespace std;

int F23(int n) {
    if (n <= 0)
        return 0; // nr mai mici decat 0 nu au cum sa se incadreze
    else if (n == 1)
        return 1; // asta inseamna ca am eliminat toti termenii si ne-a dat 1, ceea ce inseamna ca avem doar 2 si 3 div
    else if (n % 2 == 0)
        return F23(n/2); // eliminam un factor 2
    else if (n % 3 == 0)
        return F23(n/3); // eliminam un factor 3
    else return 0; // asta insseamna ca nu se imparte nici la 2, nici la 3, dar n > 1 => fals
}

int main() {
    int n;
    cin >> n;
    cout << F23(n) << endl;
}
