#include <iostream>
using namespace std;

void citire(double a[100], int &n) {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void count(const double a[], int n, double &s, double &ma, int &cnt) {
    s = 0;
    for (int i = 0; i < n; i++) {
        s = s + a[i];
    }

    // Verificăm dacă n > 0 (nu ma > 0)
    if (n > 0) {
        ma = s / n;
    } else {
        ma = 0;
    }

    cnt = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= ma) {
            cnt++;
        }
    }
}

int main() {
    int n, cnt;
    double a[100], s, ma;

    citire(a, n);
    count(a, n, s, ma, cnt);

    cout << "Suma nr este: " << s << endl;
    cout << "Media aritmetica a nr este: " << ma << endl;
    cout << "Cnt nr este: " << cnt << endl;

    return 0;
}