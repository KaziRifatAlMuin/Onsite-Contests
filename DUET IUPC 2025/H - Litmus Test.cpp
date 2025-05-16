#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n; cin >> n;
    string str; cin >> str;
    int a = 0, b = 0, s = 0;
    for(auto x : str){
        if(x == 'A') a++;
        else if(x == 'B') b++;
        else s++;
    }
    if(s == n) cout << 2 << "\n";
    else if(a > 0 && b > 0) cout << 1 << "\n";
    else cout << max(a,b) << "\n";
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
// https://codeforces.com/gym/105884/problem/H