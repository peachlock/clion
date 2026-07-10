#include <iostream>
using namespace std;

void citire(int &n) {
    cin >> n;
}

int fact (int n)
{
    if (n==0)
    {
        return 1;
    }

    int fn = 1;
    for (int i = 1; i <= n; i++)
    {
        fn = fn * i;
    }
    return fn;
}


int main() {
    int n;
    citire(n);
    cout << fact(n) << endl;
    return 0;
}
