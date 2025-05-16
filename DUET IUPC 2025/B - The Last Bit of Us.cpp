#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 3e5 + 7;

vector <int> G[N];
vector <int> val;
int ans;

int dfs(int u, int par = -1){
    int cur = val[u]; // Entering a node
    for(auto v : G[u]){
        if(v == par) continue;
        cur += dfs(v,u); // contribution of children
    }
    if(val[u] == 1) ans += cur - 1;
    else ans += cur;
    return cur % 2; // leaving the node
}


void solve(){
    int n; cin >> n;
    val.assign(n+1, 0);
    int one = 0;
    ans = 0;
    for(int i = 0; i <= n; i++) G[i].clear();
    for(int i = 1; i <= n; i++) cin >> val[i], one += val[i];
    for(int i = 0; i < n - 1; i++){
        int u, v;
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    if(one & 1) cout << -1 << "\n";
    else{
        dfs(1);
        cout << ans << "\n";
    }
}
    

int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1, st = clock();
    cin >> t;
    while(t--){
        solve();
    }
    cerr << "tTime : " << 1000 * (clock() - st) / CLOCKS_PER_SEC << " ms]\n";
    return 0;
}
// https://codeforces.com/gym/105884/problem/B