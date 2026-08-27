#include <iostream>
using namespace std;

int main() {
    struct aniversare {
        int a;
        int l;
        int z;
    }a[1000];

    int n, p, q, i;
    cin >> n;

    // citirea aniversarilor fiecarei persoane in parte
    for (i=1; i<=n; i++) {
        cin >> a[i].a;
        cin >> a[i].l;
        cin >> a[i].z;
    }

    p = 1;
    q = 1;

    for (i=2; i<=n; i++) {
        if (a[i]. a > a[p]. a || (a[i].a == a[p].a && a[i].l > a[p].l) ||
           (a[i].a == a[p].a && a[i].l == a[p].l && a[i].z > a[p].z))
            p = i;

        if (a[i].a < a[q].a || (a[i].a == a[q].a && a[i].l < a[q].l) ||
            (a[i].a == a[q].a && a[i].l == a[q].l && a[i].z < a[q].z))
            q = i;

    }

    cout << p << " " << q;
    return 0;
}