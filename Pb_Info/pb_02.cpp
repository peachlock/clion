#include <iostream>
using namespace std;

int main() {
    int n, v[101], S=0;

    cin >> n;

    for (int i=1; i<=n; i++)
        cin >> v[i];

    for (int i=1; i<=n; i++)
        S = S + v[i];

    cout << S;

    return 0;
}