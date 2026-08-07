#include <iostream>
using namespace std;

int nr_cif_zero(int n) {
    if (n == 0)
       return 0;
    else if (n % 10 == 0)
        return 1 + nr_cif_zero(n/10);
        else return nr_cif_zero(n/10);
}

int main() {
    int n;
    cin >> n;
    if (n==0)
        cout << 1;
    else cout << nr_cif_zero(n);
}