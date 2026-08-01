#include <iostream>
using namespace std;

int main() {
    char n[101], j[101];
    cout << "Introdu numele tau: ";
    cin.getline(n, 101);
    cout << "Introdu judetul din care esti: ";
    cin.getline(j, 101);

    cout << "Numele tau este " << n << " si esti din judetul " << j << endl;
}