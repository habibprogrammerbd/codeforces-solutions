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
 
    int n, m;
    cin >> n >> m;
 
    if (n > m)
        NO();
    else
    {
        if (n % 2 != 0)
        {
            int sz = n - 1;
 
            vector<int> ans;
 
            for (int i = 0; i < sz; i++)
            {
                ans.push_back(1);
            }
 
            int sum = accumulate(all(ans), 0);
 
            int tar_sum = m - sum;
 
 
            ans.push_back(tar_sum);
    
 
            if (accumulate(all(ans), 0) == m)
            {
                YES();
                for (int x : ans)
                    cout << x << " ";
                cout << endl;
            }
            else
                NO();
        }
        else
        {
            int sz = n - 2;
 
            vector<int> ans;
 
            for (int i = 0; i < sz; i++)
            {
                ans.push_back(1);
            }
 
            int sum = accumulate(all(ans), 0);
 
            int tar_sum = m - sum;
 
            int x = tar_sum / 2;
 
            ans.push_back(x);
            ans.push_back(x);
 
            if (accumulate(all(ans), 0) == m)
            {
                YES();
                for (int x : ans)
                    cout << x << " ";
                cout << endl;
            }
            else
                NO();
        }
    }
 
    // int x = 2 ^ 1;
    // cout << x << endl;
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