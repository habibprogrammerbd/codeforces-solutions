#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
 
    ll x = n / a;
    ll y = n / b;
 
    ll d = n /((a / __gcd(a, b)) * b);
 
    
 
    if (p < q)
    {
        cout << (x-d)*p + y * q << '
';
    }
    else
    {
        cout << (y - d) * q + x * p << '
';
    }
 
    // cout << x << " " << y << " " << d << endl;
 
    return 0;
}