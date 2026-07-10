#include <iostream>
using namespace std;

void citire(int &n) {
    cin >> n;
}

int oglindit( int n ) {
    if (n==0) {
        return 0;
    }

    int uc, ogld=0;
    while (n>0) {
        uc = n % 10;
        ogld = ogld * 10 + uc;
        n = n / 10;
    }
    return ogld;
}

int main () {
    int n;
    citire(n);
    cout << oglindit(n) << endl;
}