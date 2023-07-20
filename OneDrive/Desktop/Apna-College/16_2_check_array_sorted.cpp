#include <iostream>
using namespace std;
bool check(int arr[] , int n)
{
    // cout<<n<<endl;
    if(n==1)
    {
        return true;
    }
    bool restcheck = check(arr+1,n-1);
    // cout<<restcheck<<" "<<n<<" "<<*(arr+1)<<endl;
    return (arr[0]<arr[1] && restcheck);
    
    
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<check(arr,n);
  
}