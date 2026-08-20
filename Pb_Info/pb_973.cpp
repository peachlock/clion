#include <iostream>
#include <cstring>
using namespace std;

int vocala(char c) {
   if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
       return 1;
    else return 0;
}

int doarVocale(char cuv[]) {
    int n = strlen(cuv);
    for (int i=0; i< n; i++)
        if (vocala(cuv[i]) == 0) {
            return 0;
        }
    return 1;
}

int main() {
    char s[256], *p;

    cin.getline(s, 256);

    p = strtok(s, " ");

    while (p) {
        if (doarVocale(p) == 1)
            cout << p << endl;
        p= strtok(NULL, " ");
    }
}
