#include <iostream>
using namespace std;

long long SumProdRec(int n) {
    if (n <= 0)
        return 0;
    else return (n-1) * n + SumProdRec(n-1);
}

int main() {
    int n;
    cin >> n;
    cout << SumProdRec(n);
}