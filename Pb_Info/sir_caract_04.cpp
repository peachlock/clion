// Se citeste un sir de caractere format din cuvinte separate prin spatiu. Afisati cate cuvinte sunt in sir.

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[101], *p;
    int nr=0;

    cin.getline(s, 101);

    p = strtok(s, " "); // extragem primul cuvant, sep = separatorii de cuvinte, si ntre ghilimele ii pun pe cei care ma avertizeaza ca vor fi ex:" ,.;"
    while (p) // cat timp avem cuvinte de extras din sir
    {
        nr++;
        p = strtok(NULL, " "); // extragem restul cuvintelor
    }

    cout << nr;

}
