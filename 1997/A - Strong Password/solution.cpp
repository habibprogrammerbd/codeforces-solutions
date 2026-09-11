// #include <bits/stdc++.h>
// using namespace std;
 
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
 
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string s;
//         cin >> s;
//         string ans = "";
//         if (s.size() != 1)
//         {
//             s += 'p';
//         }
//         int sz = s.size();
//         bool x = false;
//         int st = false;
 
//         if (s.size() == 1)
//         {
//             x = true;
//             if (s[0] == 'a')
//             {
//                 cout << "az" << "
";
//             }
//             else if (s[0] == 'z')
//             {
//                 cout << "za" << endl;
//             }
//             else
//             {
//                 string x = s += char(int(s[0]) + 1);
//                 cout << x << endl;
//             }
//         }
//         else
//         {
//             for (int i = 0; i < sz - 1; i++)
//             {
//                 if (s[i] == s[i + 1])
//                 {
 
//                     if (st == false)
//                     {
//                         st = true;
//                         if (s[i] == 'a')
//                         {
//                             ans += s[i];
//                             ans += 'z';
//                         }
//                         else if (s[i] == 'z')
//                         {
//                             ans += s[i];
//                             ans += 'a';
//                         }
//                         else
//                         {
//                             ans += s[i];
//                             ans += char(int(s[i]) + 1);
//                         }
//                         // sz++;
//                     }
//                     {
//                         ans += s[i];
//                     }
//                 }
//                 else
//                 {
//                     ans += s[i];
//                 }
//             }
//         }
 
//         if (x == false)
//         {
//             cout << ans << endl;
//         }
//     }
 
//     return 0;
// }
 
 
 
 
 
 
 
 
 
 
 
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
        string s;
        cin >> s;
        string ans = "";
        int sz = s.size();
        bool x = false;
        int st = false;
        int idx = 0;
 
        if (s.size() == 1)
        {
            x = true;
            if (s[0] == 'a')
            {
                cout << "az" << "
";
            }
            else if (s[0] == 'z')
            {
                cout << "za" << endl;
            }
            else
            {
                string x = s += char(int(s[0]) + 1);
                cout << x << endl;
            }
        }
        else
        {
            for (int i = 0; i < sz - 1; i++)
            {
                if (s[i] == s[i + 1])
                {
                    st = true;
                    char nw;
                    if (s[i] == 'a')
                    {
                        nw = 'z';
                    }
                    else if (s[i] == 'z')
                    {
                        nw = 'a';
                    }
                    else
                    {
                        nw = char(int(s[i]) + 1);
                    }
 
                    s.insert(s.begin() + i + 1, nw);
                    idx = i;
                    break;
                }
            }
        }
 
        if (x == false)
        {
            if (st == false)
            {
                char f = '\0';
                if (s[s.size() - 1] == 'a')
                {
                    f += 'z';
                }
                else if (s[s.size() - 1] == 'z')
                {
                    f += 'a';
                }
                else
                {
                    f = s[s.size() - 1] + 1;
                    // cout << x << endl;
                }
                string b = s + f;
                cout << b << endl;
            }
            else
            {
                cout << s << endl;
            }
        }
    }
    return 0;
}