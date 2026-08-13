// Se citeste un sir de caractere format din cuvinte separate prin spatiu. Afisati cuvantul sau cuvintele care au
// cele mai multe vocale.

# include <iostream>
# include <cstring>
using namespace std;

// subprogram recursiv care returneaza nr de vocale dintrun sir
int vocale(char s[], int n) {
    if (n < 0)
        return 0;
    else if (strchr("AEIOUaeiou", s[n]) != 0)
            return 1 + vocale(s, n-1);
        else
            return vocale(s, n-1);
}

// subprogram iterativ care returneaza nr de vocale dintr-un sir
int voc(char s[]) {
    int nr=0;
    for (int i=0; i < strlen(s); i++)
        if (strchr("AEIOUaeiou", s[i]) != 0)
            nr++;
    return nr;
}

int main() {
    char s[101], c[101], *p;
    int maxi=0;
    cin.getline(s, 101);
    strcpy(c, s);

    p = strtok(s, " ");

    while (p) {
        if (vocale(p, strlen(p)-1) > maxi)
            maxi = vocale(p, strlen(p)-1);
        p = strtok(NULL, " ");
    }
    cout << maxi << endl;

    p = strtok(c, " ");

    while (p) {
        if (voc(p) == maxi)
            cout << p << endl;
        p= strtok(NULL, " ");
    }
}