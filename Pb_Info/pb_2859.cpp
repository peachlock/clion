#include <iostream>
using namespace std;

void citire ( int &n ) {
    cin >> n;
}

int TreiCifImp( int n ) {
    int cnt = 0;

    while (n > 0) {
        int cifra = n % 10;

        if (cifra % 2 != 0) {
            cnt++;
            if (cnt == 3) {
                return 1;
            }
        } else {
            cnt = 0;
        }

        n = n / 10;
    }
    return 0;
}

int main () {
    int n;
    citire(n);
    cout << TreiCifImp(n) << endl;
}