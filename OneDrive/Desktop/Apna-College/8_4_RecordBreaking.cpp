#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n + 1];
    arr[n] = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if(n==1)
    {
        cout<<1<<endl;
        return 0;
    }
    int ans = 0;
    int m = -1;
    for(int i =0;i<n;i++)
    {
        if(arr[i] > m && arr[i] > arr[i+1])
        {
            ans++;
        }
        m = max(m,arr[i]);
    }
    cout<<ans<<endl;

    // int count = 0;

    // if (arr[0] > arr[1])
    // {
    //     count++;
    // }

    // for (int i = 1; i < n; i++)
    // {
    //     int j;
    //     for (j = 0; j < i; j++)
    //     {
    //         if (arr[i] > arr[j] && arr[i] > arr[i + 1])
    //         {
    //             continue;
    //         }
    //         else
    //         {
    //             break;
    //         }
    //     }
    //     if (i == j)
    //     {
    //         count++;
    //     }
    // }
    // cout << count << endl;

}