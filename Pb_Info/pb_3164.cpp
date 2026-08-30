#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("qclasa.in");
    ofstream fout("qclasa.out");

    struct elev {
        int codul;
        int media_info;
        int nr_absente;
    }e[41];

    int n, i;
    fin >> n;
    for (i=1; i<=n; i++) {
        fin >> e[i].codul;
        fin >> e[i].media_info;
        fin >> e[i].nr_absente;
    }

    // b) afișați numărul de elevi cu media 10
    int nr_elevi_10 = 0;
    for (i=1; i<=n; i++)
        if (e[i].media_info == 10)
            nr_elevi_10++;

    fout << nr_elevi_10 << endl;

    // c) afișați media clasei (se va afișa doar partea întreagă a ei)
    int media = 0;
    for (i=1; i<=n; i++)
        media = media + e[i].media_info;

    fout <<  media / n << endl;

    // d) afișați primii doi elevi după absențe (elevii cu cele mai multe absențe). Dacă sunt mai mulți elevi cu același
    // număr de absențe se afișează în ordinea crescătoare a codului. Dacă sunt mai mult de doi elevi număr maxim de absențe
    // se afișează doar doi.
    int p1 = 1, p2 = 2;

    // Ne asigurăm că p1 este cel cu mai multe absențe (sau cod mai mic la egalitate)
    if (e[2].nr_absente > e[1].nr_absente || (e[2].nr_absente == e[1].nr_absente && e[2].codul < e[1].codul)) {
        p1 = 2;
        p2 = 1;
    }

    for (i = 3; i <= n; i++) {
        // Verificăm dacă e mai bun decât locul 1
        if (e[i].nr_absente > e[p1].nr_absente || (e[i].nr_absente == e[p1].nr_absente && e[i].codul < e[p1].codul)) {
            p2 = p1;
            p1 = i;
        }
        // Verificăm dacă e mai bun decât locul 2
        else if (e[i].nr_absente > e[p2].nr_absente || (e[i].nr_absente == e[p2].nr_absente && e[i].codul < e[p2].codul)) {
            p2 = i;
        }
    }

    fout << e[p1].codul << " " << e[p1].media_info << " " << e[p1].nr_absente << endl;
    fout << e[p2].codul << " " << e[p2].media_info << " " << e[p2].nr_absente << endl;

    return 0;
}