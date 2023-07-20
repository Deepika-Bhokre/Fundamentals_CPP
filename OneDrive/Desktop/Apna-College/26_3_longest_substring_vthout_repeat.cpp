#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int> dict(256,-1);
    int maxl = 0;
    int start =-1;
    for(int i=0;i<s.length();i++)
    {
        if(dict[s[i]] > start)
        {
            start = dict[s[i]];
        }
        dict[s[i]] = i;
        maxl = max(maxl,i-start);

    }
    cout<<maxl;





    // int n;
    // cin >> n;
    // vector<char> v(n);
    // for (auto &i : v)
    // {
    //     cin >> i;
    // }
    
    // int c = 1;
    // int ans = 0;

    // for (int i = 1; i < n; i++)
    // {
    //     cout << v[i] << " " << v[i - 1] << endl;
    //     if (v[i] != v[i - 1])
    //     {
    //         for (int j = 1; j < i; j++)
    //         {
    //             if (v[i] != v[j - 1] && v[i - 1] != v[j - 1])
    //             {
    //                 cout << v[i] << " " << v[j - 1] << " " << v[i - 1] << " " << v[j - 1] << endl;
    //                 ++c;
    //                 cout << c << endl;
    //             }
    //             else
    //             {
    //                 c = 1;
    //             }
    //             ans = max(ans, c);
    //             cout << "ans =" << ans << endl;
    //         }
    //     }
    // }
    // cout << ans << endl;
}