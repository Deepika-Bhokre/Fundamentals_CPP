#include <iostream>
using namespace std;
void prime(int n)
{
    int arr[n + 1] = {0};
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == 0)          //optional;
        {
            for (int j = i * i; j <= n; j += i)
            {
                arr[j] = 1;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            cout << i << " ";
        }
    }
}
void primefactorization(int n)
{
    int spf[n+1] = {0};
    for(int i=2;i<=n;i++)
    {
       spf[i] = i;
    }
    for(int i=2;i<=n;i++)
    {
        if(spf[i] == i)
        {
            for(int j = i*i; j<=n;j+=i)
            {
                if(spf[j] == j)
                {
                    spf[j] = i;
                }
            }
        }
    }
    while ( n != 1)
    {
        cout<<spf[n]<<" ";
        n = n/spf[n];

    }
}

int main()
{
    int n;
    cin >> n;
    primefactorization(n);
}