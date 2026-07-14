#include <iostream>
using namespace std;

void citire (int&n) {
    cin >> n;
}

void sum_cif(int n, int &sum) {
    sum = 0;
    while (n > 0) {
        int uc = n % 10;
        sum = sum + uc;
        n = n / 10;
    }
}

int main () {
    int n, sum;
    citire (n);
    sum_cif(n, sum);

    cout << sum << endl;
}