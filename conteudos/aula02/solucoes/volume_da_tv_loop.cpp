#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int v;

        for (int j = 1; j <= 3; j++) {
            cin >> v;

            if (v % 10 == 0) {
                cout << "top demais ";
            } else if (v % 2 == 0 || v % 5 == 0) {
                cout << "ok ";
            } else {
                cout << "slk num compensa ";
            }
        }
        cout << '\n';
    }
    
    return 0;
}
