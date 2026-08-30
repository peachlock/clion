// Se citeste un sir de caractere format din cuvinte. Afisati cuvantul/ cuvintele cele mai lungi si lungimea lor

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[101], c[101], *p;
    int cmmare = 0;

    cin.getline(s, 101);
    strcpy(c, s);

    p = strtok(s, " ");

    while (p) {
        if (strlen(p) > cmmare)
            cmmare = strlen(p);
        p = strtok(NULL, " ");
    }

    p = strtok(c, " ");
    while (p) {
        if (strlen(p) == cmmare)
            cout << p << " ";
        p = strtok(NULL, " ");
    }

    cout << cmmare;
}