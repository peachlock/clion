/* Scrieţi programul C++ care citeşte două cuvinte de maxim 20 litere mici şi le afişează în ordine lexicografică
 (alfabetică). Dacă sunt identice va fi afişat doar unul dintre ele.
Exemple: cal bloc => bloc cal
         bloc bloc => bloc
*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[21], c[21];

    cin >> s >> c;

    if (strcmp(s, c) < 0)
        cout << s << " " << c ;
    else if (strcmp(s, c) > 0)
        cout << c << " " << s;
    else
        cout << c;
}