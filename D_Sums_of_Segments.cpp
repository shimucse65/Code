#include <bits/stdc++.h>
// #pragma GCC optimize("Ofast")
// #pragma GCC optimize ("unroll-loops")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using o_set = tree<T, null_type, std::less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define int long long
#define endl '\n'
#define F first
#define S second
using namespace std;
const int mod = 1e9 + 7;
const int N = 2e5 + 10;
const int INF = 1e18 + 10;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve() {
    int n; cin>>n;
    vector<int> v(n);
    for(auto &x : v) cin>>x;
    
    int sm = 0;
    for(int i = 0; i < n; i++) {
        sm += v[i] * (n - i);
    }
    vector<int> cur(n);
    for(int i = 0; i < n; i++) {
        cur[i] = sm;
        sm -= v[i] * (n - i);
    }

    for(int i = 0; i < n; i++) cerr<<cur[i]<<" "; cerr<<endl;

    auto qur = [&] (int l, int r) {
        return 0LL;
    };

    int q; cin>>q;
    while(q--) {
        int l, r; cin>>l>>r;
        --l; --r;
        cout<<qur(l, r)<<endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1, c = 1; //cin>>t;
    while(t--) {
        // cerr<<"Case "<<c++<<": \n";
        solve();
    }
}

/*
i/p: 
o/p: 
*/