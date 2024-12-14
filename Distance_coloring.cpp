//Bismillah Hir Rehmanir Rahim
//Allah knows best
// #pragma GCC optimize("O3")
// #pragma GCC optimize("Ofast")
// #pragma GCC target("lzcnt")
// #pragma GCC optimize("unroll-loops")
// #pragma GCC target("avx2")
// #pragma GCC target("popcnt")

#include<bits/stdc++.h>
using namespace std;

#define ios {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);}

void solve(){
    int n, m, k;
    cin >> n >> m >> k;

    int result = min(n, k) * min(m, k);

    cout << result << endl;
}

int32_t main(){
    ios

    int test;
    cin >> test;

    while(test--){
        solve();
    }

    return 0;
}