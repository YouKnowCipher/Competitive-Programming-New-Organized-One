#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve () {
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 0; i < 2 * n; i++) {
        int a;
        cin >> a;
        if (a == 1) {
            cnt++;
        }
    }
    cout << cnt % 2 << ' ' << min(2 * n - cnt, cnt) << endl;
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