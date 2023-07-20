#include <iostream>
// #include <cmath>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // int num = 0;
    // int r;
    // int count = 1;
    // int q = n / 10;
    // while (q != 0)
    // {
    //     q = q / 10;
    //     count++;
    // }
    // cout << count << endl;
    // int k = count;
    // int s = n;
    // for (int c = 1; c <= count; c++)
    // {
    //     r = s % 10;
    //     s = s / 10;
    //     num = num + r * pow(10, k - 1);
    //     k--;
    // }
    // cout << num << " ";
    int reverse = 0;
    while(n>0)
    {
        int lastdigit = n%10;
        reverse = reverse*10 + lastdigit;
        n = n/10;
    }
    cout<<reverse<<endl;
}