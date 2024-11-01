#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve () {
    int n, k;
    cin >> n >> k;
    if ((k == n || k == 1) && (n != k || k != 1)) {
        cout << -1 << endl;
        return;
    } else if (n == 1) {
        cout << 1 << endl << 1 << endl;
        return;
    }
    if (n - k == k - 1) {
        cout << 1 << endl << 1 << endl;
    } else if ((n - k) % 2 == (k - 1) % 2) {
        if ((n - k) % 2 == 1) {
            cout << 3 << endl << "1 " << k << " " << k + 1 << endl;
        } else {
            cout << 5 << endl << "1 " << k - 1 << " " << k << " " << k + 1 << " " << k + 2 << endl;
        }
    } else {
        cout << -1 << endl;
    }
}

int32_t main () {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    unsigned test; cin >> test; // Non-negative
    while (test--) {
        solve();
    }
    
    return 0;
}