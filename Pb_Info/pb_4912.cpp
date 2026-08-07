#include <iostream>
using namespace std;


int FPareImpare(int n) {
    if (n==0)
        return 0;
    else if ((n % 10) % 2 == 0)
        return 1 + FPareImpare(n/10);
        else return -1 + FPareImpare(n/10);
}

int main() {
    int n;
    cin >> n;
    if (FPareImpare(n) == 0)
        cout << FPareImpare(n);
    else cout << FPareImpare(n) << endl;
}