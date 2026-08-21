#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[11];
    int n;
    cin >> s;
    n = strlen(s);
    int prima_vocala = -1;
    int ultima_consoana = -1;

    for (int i=0; i < n && prima_vocala == -1; i++ ) {
        if (strchr("aeiouAEIOU", s[i]) != 0)
            prima_vocala = i;
    }

    for (int i = n-1; i > 0 && ultima_consoana == -1; i++) {
        if (((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) && strchr("aeiouAEIOU", s[i]) == 0)
            ultima_consoana = i;
    }

    if (prima_vocala != -1 && ultima_consoana != -1)
        swap(s[prima_vocala], s[ultima_consoana]);
    else
        cout << "IMPOSIBIL";

    cout << s;
}



