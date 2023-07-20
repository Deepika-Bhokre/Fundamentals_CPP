#include <iostream>
#include <math.h>
#include<cmath>
using namespace std;
bool isPrime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }   return true;
}
int main()
{
    int a, b;
    cin >> a >> b;
    // bool f = 0;
    // for (int i = a; i <= b; i++)
    // {
    //     for (int j = 2; j <= sqrt(i); j++)
    //     {
    //         if ((i % j )== 0)
    //         {
    //             f = 1;
    //             break;
    //         }
    //     }

    //     if (f == 0)
    //     {
    //         cout << i << " ";
    //     }
    //     f = 0;
    // }
    for (int i = a; i <= b; i++)
    {
        if(isPrime(i) == true)
        {
            cout<<i<<" ";
        }
    }
}
