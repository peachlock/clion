#include <iostream>
using namespace std;

int par(int n) {
    if (n==0)
        return 0;
    else if ((n%10) % 2 == 0)
        return 1 + par(n/10);
        else return par(n/10);
}

int impar(int n) {
    if (n == 0)
        return 0;
    else if ((n % 10) % 2 != 0)
        return 1 + impar(n/10);
        else return impar(n/10);
}

int FPareImpare(int n) {
    if (n==0)
        return 0;
    else if (par(n) == impar(n))
        return 0;
        else return 1;
}


int main() {
    int n;
    cin >> n;
    cout << par(n) << endl;
    cout << impar(n) << endl;
    cout << FPareImpare(n) << endl;
 }