#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[256];
    cin.getline(s, 256);

    for (int i = 1; i < strlen(s); i++){
        if (s[i] != ' ' && s[i-1] == ' ')
            s[i] = s[i] - 32;
        else if (s[i] != ' ' && s[i+1] == ' ')
            s[i] = s[i] - 32;
    }

    s[0] = s[0] - 32;
    s[strlen(s)-1] = s[strlen(s)-1] - 32;

    cout << s;
}