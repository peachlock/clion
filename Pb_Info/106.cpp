/******************************************************************************
 *
Calculaţi minimul celor 3 numere date.
Programul citeşte de la tastatură 3 numere întregi separate prin spaţii.
Programul va afişa pe ecran cel mai mic dintre numerele citite.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a<=b && a<=c)
        cout << a << endl;
    else if (b<=a && b<=c)
        cout << b << endl;
    else
        cout << c << endl;

    return 0;
}