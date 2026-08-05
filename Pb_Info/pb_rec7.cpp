//Scrieţi un program care citeste 2 numere natural a si b, si afiseaza suma numerelor pare din [a,b].
//Se va scrie o functie recursiva care returneaza suma numerelor pare din [a,b], a si b sunt parametrii


#include <iostream>
using namespace std;

int suma(int a, int b) {
     if (b < a) // ca s ne asiguram ca nu vom avea stack overflow (pt ca daca cineva apleeaza functia (5, 3), se blocheaza programul
        return 0;
    else if (b % 2 == 0)
        return b + suma(a, b-1);
        else return suma(a, b-1);
}

int main () {
    int a, b;
    cin >> a >> b;

    cout << suma(a, b) << endl;
}