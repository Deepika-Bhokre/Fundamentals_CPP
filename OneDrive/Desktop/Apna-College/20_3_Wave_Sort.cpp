#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
void swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;

}
void WaveSort(int arr[] , int n)
{
    for(int i=1;i<n;i+=2)
    {
        if(arr[i] > arr[i-1])
        {
            swap(&arr[i],&arr[i-1]);
        }
        if(arr[i] > arr[i+1] && i<=n-2)
        {
            swap(&arr[i],&arr[i+1]);
        }
    }
}

int main()
{
    int arr[] = {1,3,4,7,5,6,2};
    int n = (sizeof(arr) / sizeof(arr[0]));
    cout<<n<<endl;
    WaveSort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}