// Se citesc doua nr nat a si b. Afisati cmmdc-ul lor.

#include <iostream>
using namespace std;

int cmmdc(int a, int b) {
    if ( a == b)
        return a;
    else if (a > b)
        return cmmdc(a-b, b);
    else  return cmmdc(a, b-a);
}

int cm(int a, int b) {
    if (a % b == 0)
        return b;
    else  return cm(b, a%b);
}

int main () {
    int a, b;
    cin >> a >> b;
    cout << cmmdc(a, b) << endl;
    cout << cm(a, b);
}