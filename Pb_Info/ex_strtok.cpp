// Se citeste un sir de caractere format din cuvinte separate prin spatiu. Afisati cate cuvinte sunt in sir.

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[101], *p;
    int nr = 0;

    cin.getline(s, 101);

    p = strtok(s, " ");

    while (p) {
        nr++;
        p = strtok(NULL, " ");
    }
    cout << nr;
}
