#include <iostream>
using namespace std;

void citire(int &n) {
    cin >> n;
}

int sumcif (int n) {
    int s = 0, uc;
    while (n>0) {
        uc = n % 10;
        s = s + uc;
        n = n / 10;
    }
    return s;
}

int main() {
    int n;
    citire (n);
    cout << sumcif(n) << endl;
}