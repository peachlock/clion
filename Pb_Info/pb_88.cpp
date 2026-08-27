#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("palindrom.in");
    ofstream fout("palindrom.out");

    int n;
    char s[21];

    fin >> n;

    for (int i = 1; i <= n; i++) {
        fin >> s;

        int lng = strlen(s);
        int ok = 1;

        // Verificăm dacă cuvântul curent este palindrom
        for (int j = 0; j < lng / 2 && ok == 1; j++) {
            if (s[j] != s[lng - 1 - j]) {
                ok = 0;
            }
        }

        fout << ok << endl;
    }

    return 0;
}