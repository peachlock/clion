/* Se citeste un nr natural k. Folosind subprograme dei sa se afiseze pe cate o linie in fisierul rez.txt:
 a) cati divizori are nr k
 b) suma nr pare din intervalul [1, k]
 c) nr divizibile cu 5 din intervalul [1, k]
 d) divizorii proprii ai lui k */

#include <iostream>
#include <fstream>
using namespace std;
ofstream fout("rez.txt");

int divizori(int st, int dr, int k) {
    if (st == dr)
        if (k % st == 0)
            return 1;
        else return 0;
    else {
        int mij=(st+dr)/2;
        return divizori(st, mij, k) + divizori(mij+1, dr, k);
    }
}

int suma(int st, int dr, int k) {
    if (st == dr)
        if (st % 2 == 0)
            return st;
        else return 0;
    else {
        int mij=(st+dr)/2;
        return suma(st, mij, k) + suma(mij+1, dr, k);
    }
}

void div5(int st, int dr, int k) {
    if (st == dr) {
        if (st % 5 == 0)
            fout << st << " ";
    }
    else {
        int mij=(st+dr)/2;
        div5(st, mij, k);
        div5(mij+1, dr, k);
    }
}

void proprii(int st, int dr, int k) {
    if (st == dr) {
        if (k % st == 0)
            fout << st << " ";
    }
    else {
        int mij= (st+dr)/2;
        proprii(st, mij, k);
        proprii(mij+1, dr, k);
    }
}

int main() {
    int k;
    cin >> k;

    fout << divizori(1, k, k) << endl;

    fout << suma(1, k, k) << endl;

    div5(1, k, k);
    fout << endl;

    proprii(2, k/2, k);

}
