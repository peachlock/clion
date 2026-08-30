#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[256], *p;
    char primul[256] = "";

    cin.getline(s, 256);

    p = strtok(s, " ,.");

    while (p) {
        int len = strlen(p);

        // Doar cuvinte cu lungime > 1
        if (len > 1) {
            // Verificam strcmp PRIMA DATA (optimizam numarul de verificari)
            if (strlen(primul) == 0 || strcmp(p, primul) < 0) {
                int i = 0, j = len - 1;

                while (i < j && p[i] == p[j]) {
                    i++;
                    j--;
                }

                if (i >= j) {
                    strcpy(primul, p);
                }
            }
        }

        // Trecem la urmatorul cuvant indiferent de lungimea celui curent
        p = strtok(NULL, " ,.");
    }

    if (strlen(primul) > 0)
        cout << primul;
    else
        cout << "IMPOSIBIL";

    return 0;
}