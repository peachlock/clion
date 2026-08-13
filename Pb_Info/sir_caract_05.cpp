// Se citeste un sir de caractere format din cuvinte. Afisati cuvantul/ cuvintele cele mai lungi si lungimea lor

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[101], c[101], *p;
    int maxi=0;

    cin.getline(s, 101);
    strcpy(c, s);

    p = strtok(s, " ");

    while (p) {
        if (strlen(p) > maxi)
            maxi = strlen(p);
        p = strtok(NULL, " ");
    }

    cout << maxi << endl;

    p = strtok(c, " ");

    while (p) {
        if (strlen(p) == maxi)
            cout << p << endl;
        p = strtok(NULL, " ");
    }
}