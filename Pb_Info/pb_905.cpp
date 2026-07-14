#include <iostream>
using namespace std;

void citire(int &n) {
    cin >> n;
}

void detcifre(int n, int &p, int &u) {
    int cn = n;
    u = cn % 10;
    int uc = u;
    while (n > 0) {
        uc = n % 10;
        n = n / 10;
    }
    p = uc;
}

int main () {
    int n, p, u;
    citire(n);
    detcifre(n, p, u);
    cout << "p=" << p << endl;
    cout << "u=" << u << endl;

}