#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c_max, fatia, qtd_total = 0, cont = 0;

    cin >> c_max;

    while (c_max > qtd_total) {
        cin >> fatia;

        qtd_total += fatia;

        cont = cont + 1; // cont++;
    }

    cout << cont << '\n';

    return 0;
}