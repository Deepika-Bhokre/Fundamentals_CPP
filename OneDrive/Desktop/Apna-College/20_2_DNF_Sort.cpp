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
void DNFSort(int arr[] , int n)
{
    int l,m,h;
    l = m = 0;
    h = n-1;
    while( m <= h)
    {
        if(arr[m] == 0)
        {
            swap(&arr[l++],&arr[m++]);
        }
        else if(arr[m] == 1)
        {
            m++;
        }
        else if(arr[m] == 2)
        {
            swap(&arr[m],&arr[h--]);
        }
        else
        {
            cout<<"Invalid input"<<endl;
            return;
        }
    }
}

int main()
{
    int arr[] = {1,1,2,0,0,1,2,2,1,0};
    int n = (sizeof(arr) / sizeof(arr[0]));
    cout<<n<<endl;
    DNFSort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}