#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[256];
    cin.getline(s, 256);
    int a = 0, e = 0, i = 0, o = 0, u = 0;

    int n = strlen(s);

    for (int z = 0; z < n; z++) {
        if (s[z] == 'a' || s[z] == 'A')
            a++;
        else if (s[z] == 'e' || s[z] == 'E')
            e++;
        else if (s[z] == 'i' || s[z] == 'I')
            i++;
        else if (s[z] == 'o' || s[z] == 'O')
            o++;
        else if (s[z] == 'u' || s[z] == 'U')
            u++;
    }

    int max_aparitii = a;
    char vocala_max = 'A';

    if (e > max_aparitii) {
        max_aparitii = e;
        vocala_max = 'E';
    }
    if (i > max_aparitii) {
        max_aparitii = i;
        vocala_max = 'I';
    }
    if (o > max_aparitii) {
        max_aparitii = o;
        vocala_max = 'O';
    }
    if (u > max_aparitii) {
        max_aparitii = u;
        vocala_max = 'U';
    }

    cout << vocala_max;

    return 0;
}