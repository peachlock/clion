# include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[101];
    cin.getline(s, 101);
    int n = strlen(s);
    int exista_vocale = 0;

    for (int i=0; i< n; i++) {
        if (strchr("aeiou", s[i]) != 0) {
            strcpy(s + i + 2, s + i+ 1);
            s[i+1] = '*';
            i++;
            n++;
            exista_vocale=1;
        }
    }

    if (exista_vocale == 0)
        cout << "FARA VOCALE";
    else
        cout << s;
}