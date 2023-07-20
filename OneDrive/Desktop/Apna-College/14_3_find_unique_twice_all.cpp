#include <iostream>
using namespace std;
int getbit(int n, int p)
{
    return ((n & (1 << p)) != 0);
}
int unique(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    return xorsum;
}
void twounique(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum^arr[i];
    }
    int temp = xorsum;
    int setbit = 0;
    int pos = 0;
    while (setbit != 1)
    {
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum>>1;
    }
    int newxor = 0;
    for (int i = 0; i < n; i++)
    {
        if (getbit(arr[i], pos - 1))
        {
            newxor = newxor^arr[i];
        }
    }
    
    cout <<(newxor^temp)<< endl;
    cout << newxor<< endl;
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
    twounique(arr, n);
}