/* Să se scrie un program C/C++ care citeşte de la tastatură un cuvânt format din cel mult 20
de caractere, doar litere mici ale alfabetului englez. Programul determină transformarea
cuvântului citit prin înlocuirea fiecărei vocale a cuvântului, cu un şir format din două caractere
şi anume vocala respectivă urmată de litera mare corespunzătoare, restul literelor
nemodificându-se, ca în exemplu. Programul afişează pe ecran cuvântul obţinut, pe o
singură linie. Se consideră vocale literele din mulţimea {a,e,i,o,u}.
Exemplu: pentru cuvântul bacalaureat se va afişa pe ecran: baAcaAlaAuUreEaAt
*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[41], c[41];
    cin >> s;

    int i=0;
    while (i < strlen(s))
        if (strchr("aeiou", s[i]) != 0) {
            strcpy(c, s + i + 1);
            s[i+1] = s[i] - 32;
            strcpy(s+i+2, c);
            i = i + 2;
        }
        else i++;

    cout << s;
}
