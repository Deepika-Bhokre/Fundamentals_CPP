#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int t = n;
    int sum = 0;
    int count = 1;
    int q = n / 10;
    while (q != 0)
    {
        q = q / 10;
        count++;
    }
    while (n > 0)
    {
        int lastdigit = n % 10;
        sum += pow(lastdigit, count);
        n = n / 10;
    }
    if (sum == t)
    {

        cout << "Yes its Armstrong number " << endl;
    }
}
