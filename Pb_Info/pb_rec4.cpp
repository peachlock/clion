// Scrieţi un subprogram recursiv care determină al n-lea termen al şirului Fibonacci.
// Scrieţi un program care afişează primii 16 de termeni ai şirului Fibonacci.
// 1 1 2 3 5 8 13 21 ...

#include <iostream>
using namespace std;

int fibo(int n) {
    if (n == 1 || n == 2)
        return 1;
    else return fibo(n-1) + fibo(n-2);
}


int main() {
    int n;
    cin >> n;
    cout << fibo(n) << endl;

    for (int i=1; i<=16; i++)
        cout << fibo(i) << " ";
}
