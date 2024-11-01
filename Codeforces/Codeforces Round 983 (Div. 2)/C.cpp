#include <bits/stdc++.h>
using namespace std;

#define int long long int

void solve () {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n ; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int res = n;
    for (int i = 0; i < n - 1; i++) {
        int inq = v[i] + v[i + 1];
        int it = lower_bound(v.begin() + i + 2, v.end(), inq) - v.begin();
        res = min(res, n - it + i);
    }
    cout << res << endl;
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