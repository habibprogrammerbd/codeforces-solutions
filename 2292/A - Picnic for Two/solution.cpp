#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
 
// ---------------- Macros ----------------
#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);
#define pb push_back
#define mkp make_pair
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define fi first
#define se second
#define sz(x) (int)((x).size())
#define endl '
'
#define fl(i, n) for (int i = 0; i < (n); i++)
#define fr(i, n) for (int i = (n) - 1; i >= 0; i--)
 
// ---------------- Typedefs ----------------
#define int long long
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pll> vpll;
#define vvi vector<vector<int>>
 
// ---------------- Debug (local only) ----------------
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << (x) << '
'
#else
#define debug(x)
#endif
 
// ---------------- PBDS ----------------
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
// -----------------YES and NO-------------
inline void YES() { cout << "YES
"; }
inline void NO() { cout << "NO
"; }
 
// ---------------- Solve ----------------
void solve()
{
    int l, a, b;
    cin >> l >> a >> b;
    vector<int> ans1, ans2;
    int x = 0;
    while (true)
    {
        ans1.pb(x);
 
        x = (x + a) % l;
 
        if (x == 0)
            break;
    }
 
    int y = 0;
 
    while (true)
    {
        ans2.pb(y);
 
        y = (y + b) % l;
 
        if (y == 0)
            break;
    }
 
    sort(all(ans1));
    sort(all(ans2));
 
    vi ans;
 
 
 
    set_intersection(ans1.begin(), ans1.end(), ans2.begin(), ans2.end(), back_inserter(ans));
 
    cout << ans.size() << endl;
 
 
    // for(int x : ans1) cout << x << " ";
    // cout << endl;
    // for(int x : ans2) cout << x << " ";
    // c/out << endl;
}
 
signed main()
{
    fast_io
 
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
 
    return 0;
}