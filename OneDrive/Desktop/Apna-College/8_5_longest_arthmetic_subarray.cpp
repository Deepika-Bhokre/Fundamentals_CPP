#include <iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    // int maxi = 2;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // int count = 2;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < n; j++)
    //     {
    //         if(arr[j+1] - arr[j] == arr[j+2]-arr[j+1])
    //         {
    //             ++count;
    //         }
    //         else
    //         {
    //             count = 2;
    //         }
    //         maxi = max(maxi,count);  
    //     }
    // }
    int pd = arr[1]-arr[0];
    int count= 2;
    int j = 2;
    int ans = 2;
    while(j<n)
    {
        if(pd == arr[j]-arr[j-1])
        {
            count++;
        }
        else
        {
            pd = arr[j]-arr[j-1];
            count = 2;
        }
        ans = max(ans,count);
        j++;
    }
    cout<<ans<<endl;
   
   
}