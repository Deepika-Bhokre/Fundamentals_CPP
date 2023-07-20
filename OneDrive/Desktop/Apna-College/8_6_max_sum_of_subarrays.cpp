#include <iostream>
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
    //cumulative frequency ::: 
    int maxi = INT_MIN;
    int currsum[n+1];
    currsum[0] = 0;
    for(int i=1;i<=n;i++)
    {
        int sum = 0;
        for(int j=0;j<i;j++)
        {
            sum = currsum[i] - currsum[j];
            maxi = max(maxi,sum);
        }

    }
    cout<<maxi<<endl;
    // int sum = 0;
    // int maxi = INT_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //     sum = 0;
    //     for (int j = i; j < n; j++)
    //     {
    //         sum = sum + arr[j];
    //         maxi = max(maxi,sum);
    //     }
    // }
    // cout<<maxi<<endl;
   
   
}