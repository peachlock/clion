#include <iostream>
#include <cmath>
using namespace std;

void inserare(int &n) {
    if (n < 10)
        return;

    int n_nou = 0;
    int p = 1;

    int uc = n % 10;
    n_nou = uc * p; // Punem ultima cifră pe poziția 1 (unități)
    n = n / 10;

    while (n > 0) {
        int pc = n % 10;

        int dif = abs(pc - uc);

        // 1. Pregătim poziția pentru diferență
        p = p * 10;
        n_nou = n_nou + dif * p;

        // 2. Pregătim poziția pentru cifra următoare (pc)
        p = p * 10;
        n_nou = n_nou + pc * p;

        uc = pc;
        n = n / 10;
    }

    n = n_nou;
}

int main() {
    int n;
    cin >> n;
    inserare(n);
    cout << n;
    return 0;
}