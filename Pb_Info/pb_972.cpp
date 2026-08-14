#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[256];
    int nr=0;
    cin.getline(s, 256);

    for (int i=0; i < strlen(s); i++)
        if (i > 0 && i < strlen(s)-1)
            if (strchr("aeiou", s[i]) != 0 && strchr("aeiou", s[i-1]) == 0 && s[i-1] != ' ' && strchr("aeiou", s[i+1]) == 0 && s[i+1] != ' ')
                nr++;

    cout << nr;

}