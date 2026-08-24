#include <iostream>
using namespace std;

// subrpogram iterativ care returneaza suma cifrelor mai mari decat 6
/* int suma(int n) {
    int s = 0 ;
    while (n>0) {
        if ((n%10)>6)
            s = s + (n%10);
        n = n/10;
    }
    return s;
} */

int suma_it(int n, int v[]) {
    int s = 0;
    for (int i=1; i<=n; i++)
        if (v[i] % 5 == 0)
            s = s + v[i];
    return s;
}

int suma_rec(int n, int v[]) {
    if (n == 0)
        return 0;
    else
        if (v[n] % 5 == 0)
            return v[n] + suma_rec(n-1, v);
        else return suma_rec(n-1, v);
}

int suma_dei(int st, int dr, int v[]) {
    if (st == dr) {
        if (v[st] % 5 == 0)
            return v[st];
        else
            return 0;
    }
    else {
        int mij = (st+dr)/ 2;
        return suma_dei(st, mij, v) + suma_dei(mij+1, dr, v);
    }
}

int main() {
   /* int n;
    cin >> n;

    cout << suma(n);
    */
    int n, v[100];
    cin >> n;
    for (int i=1; i<=n; i++)
        cin >> v[i];
    cout << suma_it(n, v) << endl;

    cout << suma_rec(n, v) << endl;

    cout << suma_dei(1, n, v);
}