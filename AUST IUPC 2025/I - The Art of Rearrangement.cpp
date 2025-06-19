#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.rbegin(), v.rend());
    set <int> st;
    for(int i = 0; i < n; i++) st.insert(v[i] - (i+1));
    if(st.size() < n) cout << -1 << "\n";
    else{
        for(auto x : v) cout << x << " ";
        cout << "\n";
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1, st = clock();
    cin >> t;
    while(t--){
        solve();
    }
    // cerr << "[Time : " << 1000 * (clock() - st) / CLOCKS_PER_SEC << " ms]\n";
    return 0;
}
// https://codeforces.com/gym/105723/problem/I