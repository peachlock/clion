#include <iostream>
using namespace std;

void citire(int &n, int x[100]) {
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> x[i];
    }
}

void P(int x[], int n, int &mini, int &maxi, int &sum) {
    mini=9;
    maxi=0;
    sum=0;
    for (int i=0; i < n; i++) {
        sum = sum + x[i];

        if (x[i] < mini) {
            mini = x[i];
        }

        if (x[i] > maxi) {
            maxi = x[i];
        }
    }
}

int main() {
    int x[100], n, mini, maxi, sum;
    citire(n,x);
    P(x, n, mini, maxi, sum);

    cout << "mini = " << mini << endl;
    cout << "maxi = " << maxi << endl;
    cout << "sum = " << sum << endl;

}