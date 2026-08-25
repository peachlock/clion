/* 4.a)Scrieti definitia corecta a unui tip de date necesar pentru a memora simultan intr-o singura variabila de acest tip caracteristicile unui autoturism: marca sir de maxim 20 de caractere, anul fabricatiei numar intreg de exact 4 cifre.
b)Cititi de la tastatura informatiile variabilei declarate la punctul a)
c)afisati informatiile citite la punctul b)
d)Scrieti o instructiune care sa afiseze vechimea masinii
e)Scrieti o instructiune care sa afiseze mesajul DA daca masina este de marca BMW respectiv mesajul NU */

# include <iostream>
using namespace std;

int main() {
    // a)
    struct autoturism {
        char marca[21];
        int anFabricatie;
    }a;

    // b)
    cin.getline(a.marca, 21);
    cin >> a.anFabricatie;

    // c)
    cout << a.marca << endl;
    cout << a.anFabricatie << endl;

}