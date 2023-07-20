#include<iostream>
using namespace std;
int noof1(int n)
{
    int count = 0;
    while( n != 0)
    {
        count++;
        n = (n & (n-1) ) ;  
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    cout<<noof1(n);
   
}