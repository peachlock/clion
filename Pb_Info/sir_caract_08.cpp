/*  Scrieti un program C/C++ care citeste de la tastaturã douã caractere c1 si c2 (litere distincte ale
alfabetului englez), si un text având cel mult 250 caractere (doar spatii si litere ale alfabetului englez),
pe care îl modificã înlocuind toate aparitiile caracterului memorat în c1 cu cel memorat în c2 si toate aparitiile
caracterului memorat în c2 cu cel memorat în c1. Programul afiseazã pe linii separate ale ecranului atât textul
initial cât si textul obtinut dupã efectuarea înlocuirilor.

Exemplu: dacã pentru c1 se citeste a, pentru c2 se citeste o iar textul citit este:
hocus pocus preparatus
se va afisa :
hocus pocus preparatus
hacus pacus preporotus
*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char c1, c2, s[251];

    cin >> c1 >> c2;
    cin.get();
    cin.getline(s, 251);
    cout << s << endl;

    for (int i=0; i< strlen(s); i++)
        if (s[i] == c1)
            s[i]= c2;
        else if (s[i] == c2)
            s[i] = c1;

    cout << s;
}