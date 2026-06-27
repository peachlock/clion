/******************************************************************************
Dacă x și y sunt două numere naturale cu x ≤ y, atunci notăm cu s(x,y) suma nr
nat cuprinse între x și y. De exemplu, s(3,6) = 3+4+5+6 = 18, iar s(7,7) = 7.

Cerința
Se dau numerele naturale a, b și c, unde a ≤ b ≤ c. Calculați s(a,b), s(b,c) și s(a,c).

Date de intrare
Programul citește de la tastatură numerele naturale a, b și c.

Date de ieșire
Programul va afișa pe ecran, separate prin câte un spațiu, cele trei sume.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    /* do {
        cin >> a >> b >> c;

        if (a>=1 || a<=b || a<=c || b<=c)
            cout << "Numar gresit" << endl;

    } while (a>=1 || a<=b || a<=c || b<=c); */

    cin >> a >> b >> c;

    int sab=0, sbc=0, sac=0;

    int ca=a;
    while (ca<=b){
        sab=sab+ca;
        ca++;
    }

    int cb=b;
    while (cb<=c){
        sbc=sbc+cb;
        cb++;
    }

    ca=a;
    while (ca<=c){
        sac=sac+ca;
        ca++;
    }

    cout << sab << " " << sbc << " " << sac << endl;

    return 0;
}