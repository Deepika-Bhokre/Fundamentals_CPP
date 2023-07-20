#include <iostream>
using namespace std;
void swap(int *x,int *y)
{
    int temp = *x;
    *x=*y;
    *y=temp;
}

int partition(int arr[],int l,int r)
{
    int pivot = arr[r];
    int i = l-1;
    for(int j =l;j<=r-1;j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }

    }
    swap(&arr[i+1],&arr[r]);
    return i+1;
}
void QuickSort(int arr[],int l,int r)
{
    if(l<r)
    {
        int pi = partition(arr,l,r);
        QuickSort(arr,l,pi-1);
        QuickSort(arr,pi+1,r);
    }
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
    QuickSort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}