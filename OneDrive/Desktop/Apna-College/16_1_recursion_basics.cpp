#include <iostream>
using namespace std;
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sum(n - 1);
}
int power(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    return n * power(n, p - 1);
}
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
int fibanocci(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return fibanocci(n-1) + fibanocci(n-2);
}
int main()
{
    int n, p;
    cin >> n >> p;
    cout << sum(n) << endl;
    cout << power(n, p) << endl;
    cout << factorial(n) << endl;
    cout << fibanocci(n) << endl;
}