#include <iostream>
using namespace std;

void P(int &n, int c) {
    int p = 1;
    int n_nou = 0;

    while (n > 0){
       int uc = n%10;
        if (uc != c) {
                n_nou = n_nou + uc * p;
                p = p* 10;
        }
        n = n/10;
    }
    n = n_nou;
}

int main() {
    int n, c;
    cin >> n >> c;
    if (n == 0)
        cout << "0";
    else {
        P(n, c);
        cout << n;
    }

}