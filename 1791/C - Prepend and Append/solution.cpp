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
        int n;
        cin >> n;
        string s;
        cin >> s;
 
        int left = 0;
        int right = s.size() - 1;
 
        int count = n;
        while (left <= right)
        {
            if (s[left] == s[right])
            {
                break;
            }
            else
            {
                count -= 2;
                left++,right--;
            }
        }
 
        cout << count << endl;
    }
 
    return 0;
}