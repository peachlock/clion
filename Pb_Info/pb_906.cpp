#include <iostream>
using namespace std;

void citire (int &n) {
    cin >> n;
}

void sumcif( int n, int &s, int &t) {
    s= 0, t=0;
    while (n > 0) {
        int uc = n % 10;
        if (uc % 2 == 0) {
            s = s + uc;
        } else t = t + uc;
        n = n / 10;
    }
}

int main() {
    int n, s, t;
    citire(n);
    sumcif(n, s, t);
    cout << "s = " << s << " " << endl;
    cout << "t = " << t << " " << endl;

}