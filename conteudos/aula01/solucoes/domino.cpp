#include <bits/stdc++.h> // iostream, cmath, string, algorithm, queue, list...
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, total_pecas;

    cin >> n;

    total_pecas = ((n + 1) * (n + 2)) / 2;

    cout << total_pecas << '\n';

}