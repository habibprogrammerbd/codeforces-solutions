#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, r;
        cin >> x >> y >> r;
 
        int a = x + r;
        int b = y;
 
        int p = (a - x);
        int q = (b - y);
 
        int v = p * p + q * q;
 
        int root = sqrt(v);
 
        if (root == r)
        {
            cout << a << " " << b << endl;
        }
        else
        {
            cout << x << " " << y + r << endl;
        }
    }
 
    return 0;
}