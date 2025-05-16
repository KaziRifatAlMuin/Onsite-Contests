#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    vector <int> cnt(26);
    for(auto x : s){
        cnt[x - 'a']++;
    }
    bool ok = true;
    for(int i = 0; i < 26; i++){
        if(cnt[i] > 1) ok = false;
    }
    if(ok) cout << "YES\n";
    else cout << "NO\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1, st = clock();
    cin >> t;
    while(t--){
        solve();
    }
    cerr << "[Time : " << 1000 * (clock() - st) / CLOCKS_PER_SEC << " ms]\n";
    return 0;
}
// https://codeforces.com/gym/105884/problem/D