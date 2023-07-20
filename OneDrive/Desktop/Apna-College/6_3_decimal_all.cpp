#include <bits/stdc++.h>
using namespace std;
string ans[50];
int hexadecimal_to_decimal(string m)
{
    int p = 1;
    int ans = 0;
    int s = m.size();
    for (int i = s - 1; i >= 0; i--)
    {
        if (m[i] >= '0' && m[i] <= '9')
        {
            ans += p * (m[i] - '0');
        }
        else if (m[i] >= 'A' && m[i] <= 'F')
        {
            ans += p * (m[i] - 'A' + 10);
        }
        p *= 16;
    }
    return ans;
}
int decimal_hexadecimal(int n)
{
    string ans = "";
    int p = 1;
    int i = 0;
    while (n != 0)
    {
        int r = n % 16;
        if (r >= 0 && r <= 9)
        {
            r = r + 48;
        }
        else if (r >= 10 && r <= 15)
        {
            r = r + 55;
        }
        ans[i] = r;
        i++;
        n = n / 16;
    }
    return i;
}

int decimal_binary(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int r = n % 2;
        ans = ans + r * x;
        x *= 10;
        n = n / 2;
    }

    return ans;
}
int decimal_octal(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int r = n % 8;
        ans = ans + r * x;
        x *= 10;
        n = n / 8;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << decimal_binary(n) << " ";
    cout << decimal_octal(n) << " ";
    int a = decimal_hexadecimal(n);
    for (int i = a - 1; i >= 0; i++)
    {
        cout << ans[i];
    }
}