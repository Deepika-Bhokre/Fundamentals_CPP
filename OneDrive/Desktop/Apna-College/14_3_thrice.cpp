#include <iostream>
using namespace std;
bool getbit(int n, int p)
{
    return ((n & (1 << p)) != 0);
}
int setbit(int n,int p)
{
    return (n | 1<<p);
}

int thrice(int arr[] , int n)
{
    int result = 0;
    for(int i=0;i<64;i++)
    {
        int sum = 0;
        for(int j=0;j<n;j++)
        {
            if(getbit(arr[j],i))
            {
                sum++;
            }
        }
        if(sum % 3 != 0)
        {
            result = setbit(result , i);

        }
    }
    return result;

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
    cout<<thrice(arr,n);
    
}