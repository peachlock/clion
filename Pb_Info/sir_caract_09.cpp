/*  Un şir cu maximum 255 de caractere conţine cuvinte separate prin unul sau mai multe spaţii.
Cuvintele sunt formate numai din litere mici ale alfabetului englez. Scrieţi un program C/C++
care citeşte un astfel de şir şi îl afişează modificat, prima şi ultima literă a fiecărui cuvânt fiind
afişată ca literă mare.
Exemplu: pentru şirul: maine este proba la informatica se va afişa:
MainE EstE ProbA LA InformaticA
*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[256];
    cin.getline(s, 256);

    for (int i = 1; i < strlen(s); i++)
        if (s[i] != ' ' && s[i-1] == ' ')
            s[i] = s[i] - 32;
        else if (s[i] != ' ' && s[i+1] == ' ')
            s[i] = s[i] - 32;

    s[0] = s[0] - 32;
    s[strlen(s) - 1] = s[strlen(s) - 1] - 32;

    cout << s;
}