#include <iostream>
using namespace std;
void merge(int arr[], int s, int m, int e)
{
    int i = s;
    int j = m + 1;
    int k = 0;
    int ans[s + e + 1];
    while (i <= m && j <= e)
    {
        if (arr[i] < arr[j])
        {
            ans[k++] = arr[i++];
        }
        else
        {
            ans[k++] = arr[j++];
        }
    }
    while (i <= m)
    {
        ans[k++] = arr[i++];
    }
    while (j <= e)
    {
        ans[k++] = arr[j++];
    }
    k = 0;
    for (int i = s; i <= e; i++)
    {
        arr[i] = ans[k++];
    }
}
void mergeSort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int m = (s + e) / 2;
    mergeSort(arr, s, m);
    mergeSort(arr, m + 1, e);
    merge(arr, s, m, e);
}
int main()
{
    int n;
    cout << "Enter the size of array ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}