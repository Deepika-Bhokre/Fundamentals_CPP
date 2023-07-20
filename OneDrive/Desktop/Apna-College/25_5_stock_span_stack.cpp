#include <bits/stdc++.h>
// #include<stack>
using namespace std;
vector<int> stockspan(vector<int> a)
{
    vector<int> ans;
    stack<pair<int, int>> s;
    for (auto element : a)
    {
        int days = 1;
        while (!s.empty() && s.top().first <= element)
        {
            days = days + s.top().second;
            s.pop();
        }
        s.push({element, days});
        // cout << s.top().first << " ";
        // cout << s.top().second << " ";
        // cout << endl;
        ans.push_back(days);
    }
    // while (!s.empty())
    // {
    //     cout << s.top().first << " ";
    //     cout << s.top().second << " ";
    //     cout << endl;
    //     s.pop();
    // }

    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> a = {10, 20, 30, 40, 70, 20, 30, 50};
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }
    vector<int> ans = stockspan(a);
    for (auto element : ans)
    {
        cout << element << " ";
    }

    return 0;
}