#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {1,3,2,3,4,1,6,4,3};
    int n = (sizeof(arr) / sizeof(arr[0]));
    cout<<n<<endl;
    int maxi = 0;
    for(int i =0;i<n;i++)
    {
        maxi = max(maxi,arr[i]);
    }
    cout<<maxi<<endl;
    int countarr[maxi+1] = {0};
    for(int i =0;i<n;i++)
    {
       countarr[arr[i]]++;
    }
    for(int i=0;i<=maxi;i++)
    {
        cout<<countarr[i]<<" ";
    }
    cout<<endl;
    // int sum = 0;
    // int newc[maxi+1];
    // for(int i=0;i<=maxi;i++)
    // {
    //     sum = 0;
    //     for(int j =0;j<=i;j++)
    //     {
    //         sum = countarr[j]+ sum;
    //     }
    //     newc[i] = sum;
    //     cout<<newc[i]<<" ";
    // }
    for(int i =1;i<=maxi;i++)
    {
        countarr[i] += countarr[i-1];
        cout<<countarr[i]<<" ";
    }
    cout<<endl;
    int ans[n];
    for(int i = n-1;i>=0;i--)
    {
        // int m = arr[i];
        ans[--countarr[arr[i]]] = arr[i];   //1,3,2,3,4,1,6,4,3
    }
    for(int i = 0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
}