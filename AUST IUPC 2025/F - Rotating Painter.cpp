#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define PI acos(-1.0)

void solve(){
    int n1, n2, a1, a2;
    cin >> n1 >> a1 >> n2 >> a2;
    ld angle1 = 2 * PI / (n1 * 2);
    ld angle2 = 2 * PI / (n2 * 2);
    ld r1 = (a1/2.0) / tan(angle1);
    ld R1 = (a1/2.0) / sin(angle1);
    ld r2 = (a2/2.0) / tan(angle2);
    ld R2 = (a2/2.0) / sin(angle2);
    ld area1 = (n1 * a1 * a1) / (4.0 * tan(PI / n1));
    ld area2 = (n2 * a2 * a2) / (4.0 * tan(PI / n2));
    ld ans = 0;
    if(r1 > R2){
        cout << fixed << setprecision(12) << ans << "\n";
    }
    else if(r1 < r2){
        ld block = PI * r1 * r1;
        ans = area2 - block; 
        cout << fixed << setprecision(12) << ans << "\n";
    }
    else{
        ld big = PI * r1 * r1;
        ld alpha = 2.0 * acos(r2 / r1);
        ld cir = r1 * r1 * alpha / 2.0;
        ld triangle = 0.5 * r1 * r1 * sin(alpha);
        ld extra = cir - triangle;
        ld block = (big - (n2 * extra));
        ans = area2 - block;
        cout << fixed << setprecision(12) << ans << "\n";
    }
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
// https://codeforces.com/gym/105723/problem/F