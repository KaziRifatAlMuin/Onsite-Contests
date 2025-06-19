#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n; cin >> n;
    if(n == 1){
        cout << "1\n";
        return;
    }
    int last = n / 2 + 1;
    cout << 1;
    for(int i = n; i > 1; i--) {
        if(i == last) continue;
        cout << " " << i;
    }
    cout << " " << last << "\n";
}
    
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll t = 1, st = clock();
    cin >> t;
    while(t--){
        solve();
    }
    cerr << "Time : " << 1000 * (clock() - st) / CLOCKS_PER_SEC << " ms]\n";
    return 0;
}
// https://codeforces.com/gym/105723/problem/B