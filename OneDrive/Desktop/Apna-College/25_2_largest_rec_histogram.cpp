#include <iostream>
#include <cmath>
#include <math.h>

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
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int minh = INT_MAX;
        for (int j = i; j < n; j++)
        {
            minh = min(minh, arr[j]);
            int len = j - i + 1;
            ans = max(ans, len * minh);
        }
    }
    cout<<ans<<endl;
    return 0;
}