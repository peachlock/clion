/******************************************************************************

Fiind date vârstele a doi copii (a și b) afișați care dintre ei este cel mai mare și cu cât.

Programul citește de la tastatură vârstele celor 2 copii.

Programul va calcula diferența de vârstă x și va afișa pe ecran 'Primul copil este mai
mare cu x ani' dacă primul copil are cea mai mare vârstă, 'Al doilea copil este mai mare
cu x ani' dacă al doilea copil este cel mai în vârstă sau 'Copiii au varste egale' dacă x=0.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int a, b, x;
    cin >> a >> b;

    if(a>b)
    {
        x=a-b;
        cout << "Primul copil este mai mare cu " << x << " ani" << endl;
    }
    if (b>a)
    {
        x=b-a;
        cout << "Al doilea copil este mai mare cu " << x << " ani" << endl;
    }

    if(a==b)
    {
        x=a-b;
        if(x==0)
            cout << "Copiii au varste egale" << endl;
    }

    return 0;
}