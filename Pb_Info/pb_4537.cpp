#include <iostream>
using namespace std;

int CifEgaleRec(int n, int k) {
    if (n < 10) {
        if (n == k)
            return 1;
        else
            return 0;
    }
    else if (n%10 == k)
        return CifEgaleRec(n/10, k);
        else
            return 0;
}

int main() {
    int n, k;
    cin >> n >> k;

    cout << CifEgaleRec(n, k);
}