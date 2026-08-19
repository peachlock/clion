/* Se citeste un sir de maxim 50 de caract. Folosind subprograme dei sa se afiseze pe cate o linie a ecrenului:
 a) cate litere mici sunt in sir
 b) poz literelor mari din sir
 c) cate vocale sunt in sir
 d) suma caracterelor cifra din sir
 e) sirul de la sfarsit la inceput */

#include <iostream>
#include <cstring>
using namespace std;

int mici(int st, int dr, char s[]) {
    if (st == dr) {
        if (s[st] >= 'a' && s[st] <= 'z')
            return 1;
        else return 0;
    }
    else {
        int mij= (st+dr)/2;
        return mici(st, mij, s) + mici(mij+1, dr, s);
    }
}

void mari(int st, int dr, char s[]) {
    if (st == dr) {
        if (s[st] >= 'A' && s[st] <= 'Z')
            cout << st << " ";
    }
    else {
        int mij = (st+dr)/2;
        mari(st, mij, s);
        mari(mij+1, dr, s);
    }
}

int vocale(int st, int dr, char s[]) {
    if (st == dr)
        if (strchr("aeiouAEIOU", s[st]) != 0)
            return 1;
        else return 0;
    else {
        int mij=(st+dr)/2;
        return vocale(st, mij, s) + vocale(mij+1, dr, s);
    }
}

int cifra(int st, int dr, char s[]) {
    if (st == dr)
        if (s[st] >= '0' && s[st] <= '9')
            return s[st] - '0';
        else return 0;
    else {
        int mij=(st+dr) / 2;
        return cifra(st, mij, s) + cifra(mij+1, dr, s);
    }
}

void afis(int st, int dr, char s[]) {
    if (st == dr) {
        cout << s[st] ;
    }
    else {
        int mij=(st+dr)/ 2;
        afis(mij+1, dr, s);
        afis(st, mij, s);
    }
}

int main() {
    char s[51];
    cin.getline(s, 51);

    cout << mici(0, strlen(s) - 1, s) << endl;

    mari(0, strlen(s)-1, s);
    cout << endl;

    cout << vocale(0, strlen(s) - 1, s) << endl;
    cout << cifra(0, strlen(s) - 1, s) << endl;

    afis(0, strlen(s) - 1, s);

}