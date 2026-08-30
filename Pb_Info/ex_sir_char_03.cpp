/* Eliminarea cuvintelor cu lungime pară

Se citește o propoziție formată din cuvinte separate prin câte un singur spațiu. Scrie un program care elimină din propoziție
toate cuvintele care au un număr par de litere. Cuvintele rămase trebuie să păstreze ordinea originală și să fie separate tot
prin câte un spațiu.

Exemplu de intrare: ana are doua mere si trei pere

Exemplu de ieșire: ana si trei
(Explicație: are [3], doua [4 - eliminat], mere [4 - eliminat], pere [4 - eliminat]) */

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[256], c[256] = "", *p;

    cin.getline(s, 256);

    int i;

    p = strtok(s, " ");

    while (p) {
        if (strlen(p) % 2 != 0) {
            strcat(c, p);
            strcat(c, " ");
        }
        p = strtok(NULL, " ");
    }

    cout << c;
}