#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[21];
    cin.getline(s, 21);

    int n = strlen(s);

    for (int i=0; i < n; i++)
        if (strchr("aeiou", s[i]) != 0)
            s[i] = s[i] - 32;

    cout << s;

}