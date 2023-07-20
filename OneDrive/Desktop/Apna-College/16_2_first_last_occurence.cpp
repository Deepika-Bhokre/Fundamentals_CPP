#include <iostream>
using namespace std;
int firstoccurence(int arr[],int n,int i,int key)
{
    if(i==n)
    {
        return -1;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return firstoccurence(arr,n,i+1,key);
}
int lastoccurence(int arr[],int n,int i,int key)
{
    if(i==0)
    {
        return -1;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return lastoccurence(arr,n,i-1,key);
}

int main()
{
    int n,key;
    cin >> n>>key;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<firstoccurence(arr,n,0,key)<<endl;
    cout<<lastoccurence(arr,n,n,key);
}