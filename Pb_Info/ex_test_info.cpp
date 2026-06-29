/* Scrieţi un program C++ care să rezolve următoarele probleme:
Se citeşte din fisierul Date.in un număr natural n şi apoi cele n numere naturale ale
vectorului a. (1 p citire din fisier)
a) Afișați în ordine inversă elementele vectorului (1p)
b) Afișați numărul de numere perfecte (un număr este perfect dacă este egal cu suma
divizorilor săi mai mici decât el ex 6=1+2+3) (1,5p)
c) Rearanjați elementele vectorului astfel încât elementele pare să ajungă înaintea
celor impare, cu păstrarea ordinii din șirul initial (1,5p)
d) Să se insereze între oricare două numere vecine divizorii lor comuni (2p)
e) Să se ordoneze elementele vectorului crescător după numărul de cifre distincte (2p) */

#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("/Users/peachlock/Projects/clion/Pb_Info/Date.in");
int main () {
    int n, a[100];
    fin >> n;
    for (int i = 1; i <= n; i++)
        fin >> a[i];

    for (int i = n; i >= 1; i--)
        cout << a[i] << " ";
}