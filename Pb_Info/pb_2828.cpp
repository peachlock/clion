/*  Se consideră un text cu cel mult 100 de caractere, în care cuvintele sunt formate numai din litere mari și mici ale alfabetului englez și sunt separate prin câte un spațiu. Textul reprezintă numele unei instituții sau al unei organizații.

Scrieți un program care citește de la tastatură un text de tipul precizat și construiește în memorie, apoi afișează pe ecran, un șir de caractere ce reprezintă acronimul corespunzător numelui citit. Acronimul este format din primul caracter al fiecărui cuvânt al numelui care începe cu majusculă.

Programul citește de la tastatură șirul.

Programul va afișa pe ecran acronimul construit. */

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[101], c[101];
    cin.getline(s, 101);
    int n = strlen(s), k=0; // k e indicele celui de-al doilea sir

    if (s[0] >= 'A' && s[0] <= 'Z') {
        c[k] = s[0];  // cazul special care sa verifice si prima litera
        k++;
    }

    for (int i=1; i < n-1; i++) {
        if (s[i-1] == ' ' && s[i] >= 'A' && s[i] <= 'Z') {
            c[k] = s[i];
            k++;
        }
    }

    c[k] = '\0'; // marcam finalul celui de-al doilea sir

    cout << c;

    return 0;
}