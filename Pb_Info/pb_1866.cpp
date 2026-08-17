#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main() {
    ifstream fin("prosir.in");
    ofstream fout("prosir.out");

    char s[201];
    fin.getline(s, 201);

    int n = strlen(s);

    for (int i=0; i < n; i++) {
        if (s[i] != ' ' && s[i+1] == ' ')
            s[i]= '5';
        else if (s[i] != ' ' && s[i+1] == '.')
            s[i] = '5';
    }

    fout << s;

}