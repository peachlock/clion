#include <iostream>
using namespace  std;

void citire(int&n) {
    cin >> n;
}

int sumfactcif(int n) {
    int s = 0 ;

    if (n==0) return 1;

    while (n > 0) {
        int cn = n % 10;

        int cfact=1;
        for (int i=1; i<=cn; i++)
            cfact = cfact * i;

        s = s + cfact;
        n = n / 10;
    }
    return s;
}

int main() {
    int n;
    citire(n);
    cout << sumfactcif(n) << endl;
}