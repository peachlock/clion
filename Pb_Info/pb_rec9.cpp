/* 1. Pe prima linie a fişierului DATE.TXT se află un număr natural nenul n reprezentând elementele
 * unui şir de numere întregi care se află pe a doua linie a fişierului;. Afişaţi pe ecran pe cate o
 * linie a ecranului, utilizând subprograme recursive:
 a) suma elementelor pozitive din şirul de numere
 b) numărul elementelor negative din şirul de numere
 c) produsul elementelor de pe pozitii divizibile cu 3
 d) daca sirul contine cel putin un element par sau nu */

#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("DATE.TXT");

int suma(int n, int v[]) {
    if (n == 0)
        return 0;
    else if (v[n] > 0)
            return v[n] + suma(n-1, v);
        else
            return suma(n-1, v);
}
int negative(int n, int v[]) {
    if (n == 0)
        return 0;
    else if (v[n] < 0)
        return 1 + negative(n-1, v);
        else
            return negative(n-1, v);
}

int pozdiv3(int n, int v[]) {
    if (n < 3)
        return 1;
    else if (n % 3 == 0)
        return v[n] * pozdiv3(n-1, v);
        else return pozdiv3(n-1, v);
}

int par(int n, int v[]) {
    if (n == 0)
        return 0;
    else if (v[n] % 2 == 0)
            return 1;
        else
            return par(n-1, v);
}

int main() {
    int n, v[101];
    fin >> n;
    for (int i=1; i<=n; i++)
        fin >> v[i];
    cout << suma(n, v) << endl;
    cout << negative(n, v) << endl;
    cout << pozdiv3(n, v) << endl;
    if (par(n, v) == 1)
        cout << "Sirul contine cel putin un element par";
    else cout << "Sirul nu contine niciun element par";
}