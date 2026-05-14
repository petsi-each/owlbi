#include <bits/stdc++.h>
using namespace std;

int main() {
    int par[10], impar[10], n, par_cont = 0, impar_cont = 0;

    for (int i = 0; i < 10; i++) {
        cin >> n;

        if (n % 2 == 0) {
            par[par_cont] = n;
            par_cont++;
        } else {
            impar[impar_cont] = n;
            impar_cont++;
        }
    }

    cout << "Pares:\n";
    for (int i = 0; i < par_cont; i++) {
        cout << par[i] << " ";
    }
    cout << "\nÍmpares:\n";
    for (int i = 0; i < impar_cont; i++) {
        cout << impar[i] << " ";
    }
    cout << '\n';
}