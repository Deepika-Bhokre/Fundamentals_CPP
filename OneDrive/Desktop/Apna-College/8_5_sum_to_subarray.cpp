#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 1; i <=n; i++)
    {
        cin >> arr[i];
    }
    int st;
    cin>>st;
    int i =0, j=0,s=-1,e=-1;
    int sum = 0;
    while(j<n && sum+arr[j] <= st)
    {
        sum += arr[j];
        j++;  
    }
    if(sum == st)
    {
        cout<<i+1<<" "<<j+1<<" ";
        return 0;
    }
    while(j<n)
    {
        sum += arr[j];
        while(sum > st)
        {
            sum -= arr[i];
            i++;
        }
        if(sum == st)
        {
            s = i;
            e = j;
            break;
        }
        j++;
    }
    cout<<s<<" "<<e<<" ";
    return 0;
















    // int sum = 0;
    // for(int i =1;i<=n;i++)
    // {
    //     sum = 0;
    //     for(int j=i;j<=n;j++)
    //     {
    //         sum = sum + arr[j];
    //         if(sum == s)
    //         {
    //             cout<<i<<" "<<j<<endl;
    //             return 0;
    //         }
    //     }
    // }
   
    
}