#include <iostream>
using namespace std;
void InsertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int curr = arr[i];
        while (arr[j] > curr && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = curr;
    }
}
bool pairsum(int arr[], int n, int k)
{
    InsertionSort(arr, n);
    int s = 0;
    int f = n - 1;
    while (s < f)
    {
        if ((arr[s] + arr[f]) < k)
        {
            s++;
        }
        else if ((arr[s] + arr[f]) > k)
        {
            f--;
        }
        else
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    cout<<pairsum(arr,n,k)<<endl;

   
}