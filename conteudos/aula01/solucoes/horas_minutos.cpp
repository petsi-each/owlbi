#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int h, m, resp;

    cin >> h >> m;

    resp = m + (h * 60);

    cout << resp << '\n';
}