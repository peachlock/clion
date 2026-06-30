#include <iostream>
using namespace std;

/*  factorialul unui numar cu subprogram/ functie
int factorial(int n) {
    int fact = 1;
    for (int i=1; i<=n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main ()
{
    int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}
*/

int factorial(int n) {
    if ( n<= 0) {
        return 1;
    }
    else {
        return n * factorial(n-1);
    }
}

int main () {
    int n;
    cin >> n;
    cout << factorial(n);

    return 0;
}