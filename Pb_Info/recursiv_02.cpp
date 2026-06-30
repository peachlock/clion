// Să se determine recursiv al n-lea termen tribonacci (elementul curent este egal cu suma ultimelor trei):
#include <iostream>
using namespace std;

int tribo(int n) {
    if (n<=3) {
        return 1;
    }
    else {
        return tribo(n-1) + tribo(n-2) + tribo(n-3);
    }
}

int main () {
    int n;
    cin >> n;
    cout << tribo(n);
    return 0;
}
