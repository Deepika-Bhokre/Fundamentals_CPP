#include <iostream>
using namespace std;
int kidanes(int arr[], int n)
{
    int maxi = INT_MIN;
    int currsum = 0;
    for (int i = 0; i < n; i++)
    {
        currsum += arr[i];
        if (currsum < 0)
        {
            currsum = 0;
        }
        maxi = max(maxi, currsum);
    }
    return maxi;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int ans[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0; 
    for (int i = 0; i < n; i++)
    {
       ans[i] = -arr[i];
       sum += arr[i];
    }
    int noncontributing = kidanes(ans,n);
    int contributing = sum + noncontributing;
    cout<<max(contributing,noncontributing)<<endl;

}