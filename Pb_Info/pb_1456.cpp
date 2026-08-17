#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[101];
    cin >> s;
    int n = strlen(s), ok=1, cons=0;;

    for (int i=0; i < n; i++) {
        if (strchr("aeou", s[i]) != 0)
            ok=0;
        else if (strchr("aeiou", s[i]) == 0)
            cons = 1;
    }
    if (ok==1 && cons == 1)
        cout << "DA";
    else cout << "NU";
}