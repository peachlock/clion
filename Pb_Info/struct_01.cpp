/*  In fisierul Firma.txt pe prima linie este un numar n ce reprezinta numarul de angajati la o firma iar
 pe urmatoarele 5*n linii se gasesc informatii despre fiecare angajat astfel:
- numele sir de cel mult 20 caractere
- adresa sir de cel mult 20 caractere
- functia sir de cel mult 20 caractere
- salarul numar intreg de cel mult 5 cifre
- numar de copii numar intreg de cel mult 2 cifre
Scrieti un program care sa citeasca informatiile din fisier si apoi scrie in fisierul Date.in pe cate o linie:
a) Angajatii firmei ordonati alfabetic
b) Se citeste numele unei functii, afisati cati angajati au functia citita
c) Valoarea totala a salarului pe care il plateste firma angajatilor
d) Se citeste numele unui angajat, afisati toate informatiile lui
e) Pentru toti angajatii care au mai mult de 4 copii li se mareste salarul cu 15%, afisati noul salariu
f) Stergeti toti angajatii a caror nume incepe cu litera B
g) Functia care are cel mai mic salar
*/

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
ifstream fin("Firma.txt");
ofstream fout("Date1.txt");

int main() {
    struct angajat {
        char nume[21];
        char adresa[21];
        char functie[21];
        int salar;
        int nrc;
    }a[50];

    int n, i, j, t=0;

    fin >> n;
    for (i=1; i<=n; i++) {
        fin.get();
        fin.getline(a[i].nume, 21);
        fin.getline(a[i].adresa, 21);
        fin.getline(a[i].functie, 21);
        fin >> a[i].salar;
        fin >> a[i].nrc;
    }

    for (i=1; i<=n; i++)
        fout << a[i].nume << " " << a[i].adresa << " " << a[i].functie << " " << a[i].salar << " " << a[i].nrc << endl;

    fout << endl;

    //a)
    for (i=1; i < n; i++)
        for (j=i+1; j<=n; j++)
            if (strcmp(a[i].nume, a[j].nume) > 0)
                swap(a[i], a[j]);

    for (i=1; i<=n; i++)
        fout << a[i].nume << " " << a[i].adresa << " " << a[i].functie << " " << a[i].salar << " " << a[i].nrc << endl;

    fout << endl;

    // b)
    char f[21];
    int nr=0;
    cin >> f;
    for (i=1; i<=n; i++)
        if (strcmp(a[i].functie, f) == 0)
            nr++;

    fout << nr << endl;

    // c)
    for (i=1; i<=n; i++)
        t = t + a[i].salar;

    fout << t << endl;

    // d)
    char nu[21];
    cin.get();
    cin.getline(nu, 21);
    for (i=1; i<=n; i++)
        if (strcmp(a[i].nume, nu) == 0)
            fout << a[i].adresa << " " << a[i].functie << " " << a[i].salar << " " << a[i].nrc << endl;

    //e)
    for (i=1; i<=n; i++)
        if (a[i].nrc > 4)
            a[i].salar = (a[i].salar * 115) / 100;

    for (i=1; i<=n; i++)
        fout << a[i].nume << " " << a[i].adresa << " " << a[i].functie << " " << a[i].salar << " " << a[i].nrc << endl;

    fout << endl;

    // f)
    i=1;
    while (i<=n)
        if (a[i].nume[0] == 'B') {
            for (j = i; j < n; j++)
                a[j] = a[j+1];
            n--;
        }
        else
            i++;

    for (i=1; i<=n; i++)
        fout << a[i].nume << " " << a[i].adresa << " " << a[i].functie << " " << a[i].salar << " " << a[i].nrc << endl;

    fout << endl;

    // g)
    int mini = a[1].salar;
    for (i=2; i<=n; i++)
        if (a[i].salar < mini) {
            mini = a[i].salar;
            strcpy(f, a[i].functie);
        }
    fout << f << endl;
}
