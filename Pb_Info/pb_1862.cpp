#include <iostream>
using namespace std;

void cnt_cif(int  n, int k, int &c) {
    if (n<10) {
        if (n >= k)
            c = 1;
        else
            c = 0;
    }
    else {
        cnt_cif(n/10, k, c);
        if (n%10 >= k)
            c++;
    }

}

int main() {
    int n, k, c;
    cin >> n >> k;
    cnt_cif(n, k, c);
    cout << c;
}