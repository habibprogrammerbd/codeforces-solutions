#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }
    int count = 0;
    int idx = 1;
    while (!pq.empty())
    {
        if (pq.top() >= idx)
        {
            count++;
            pq.pop();
            idx++;
        }
        else
        {
            pq.pop();
        }
    }
    cout << count << endl;
 
    return 0;
}