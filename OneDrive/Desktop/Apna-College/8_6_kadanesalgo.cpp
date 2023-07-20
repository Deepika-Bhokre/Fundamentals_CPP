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
    int maxi = INT_MIN;
    int currsum = 0;
    for(int i=0;i<n;i++)
    {
        currsum += arr[i];
        if(currsum < 0)
        {
            currsum =0;
        }
        maxi = max(maxi,currsum);

    }
    cout<<maxi<<" ";
}
// public int maxSubArray(int[] nums) {
//         int curr = 0;
//         int max = Integer.MIN_VALUE;
        
//         for(int num: nums) {
//              // Same as DP[i] = Math.max(DP[i-1] + num, num);
//             curr = Math.max(curr + num, num); 
//             max = Math.max(max, curr);
//         }
    
//         return max;
//     }