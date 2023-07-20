#include <iostream>
#include <cmath>
#include <climits>
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
    int count = 0;
    int maxi = INT_MIN;
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (arr[i] >= arr[j])
            {
                count++;
                // cout << count << " ";
                // cout << arr[i] << " ";
                // cout << arr[j] << " ";
            }
            else
            {
                count = 0;
            }
            maxi = max(maxi, count);
        }
        cout << maxi << " ";
        maxi = 0;
        count = 0;
    }
}