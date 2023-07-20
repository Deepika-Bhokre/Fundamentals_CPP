#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    const int N = 1e6+2;
    int mini = INT_MAX;
    int idx[N];
    for(int i=0;i<N;i++)
    {
        idx[i] = -1;
    }
    for(int i=0;i<n;i++)
    {
        if(idx[arr[i]] == -1)
        {
            idx[arr[i]]=i;
        }
        else
        {
            mini = min(mini,idx[arr[i]]);
        }
        
    }
    if(mini == INT_MAX)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<mini+1<<endl;
    }
}