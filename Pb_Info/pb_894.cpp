#include <iostream>
using namespace std;

void citire(int &n) {
    cin >> n;
}

void cifminmax(int n, int &max, int &min) {
    max = 0, min = n % 10;
    int uc;

    while ( n > 0 ) {
        uc = n % 10;
        if (uc > max ) {
            max = uc;
        }
        if (uc < min) {
            min = uc;
        }
        n = n / 10;
    }
}


int main () {
    int n, min, max;
    citire(n);
    cifminmax(n, min, max);
    cout << "Minimul este: " << min << endl;
    cout << "Maximul este: " << max << endl ;
}