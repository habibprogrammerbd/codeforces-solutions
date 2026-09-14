#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
    multiset<int> st;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.insert(x);
    }
 
    int day = 0, problem = 1;
    while (!st.empty())
    {
        auto lb = st.lower_bound(problem);
        if (lb != st.end())
        {
            day++;
            st.erase(lb);
        }
        else
        {
            break;
        }
        problem++;
    }
 
    cout << day << endl;
 
    return 0;
}