#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[11], c[11];
    cin >> s;

    int n = strlen(s);

    // Salvăm o copie a șirului pentru sufixe
    strcpy(c, s);

    // 1. AFISARE PREFIXE
    for (int i = n; i > 0; i--) {
        s[i] = '\0'; // Marcăm sfârșitul la poziția i
        cout << s << endl;
    }

    // 2. AFISARE SUFIXE
    for (int i = 0; i < n; i++) {
        cout << c + i << endl; // c + i afișează șirul începând de la poziția i
    }

    return 0;
}