#include <iostream>
using namespace std;
int euclid(int n , int m)
{
    int max,min;
    if(n > m)
    {
        max = n;
        min = m;
    }
    else
    {
        min = n;
        max = m;
    }
    int r = max%min;
    while( r != 0)
    {
       max = min;
       min = r;
       r= max%min;
    }
    return min;
}

int main()
{
    int n,m;
    cin >> n>>m;
    cout<<euclid(n,m);
  
}