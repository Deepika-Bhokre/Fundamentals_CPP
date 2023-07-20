#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    int z = 0, ans = 0,j=0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            z++;
        }
        while( z > k)
        {
            if(v[j] == 0)
            {
                z--;
            }
            j++;
        }
        ans = max(ans,i-j+1);
    }
    cout<<ans<<endl;
}