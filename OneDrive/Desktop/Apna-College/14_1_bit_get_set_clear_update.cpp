#include<iostream>
using namespace std;
int getbit(int n , int p)
{
    return ((n & (1<<p)) != 0);
}
int setbit(int n , int p)
{
    return (n | (1<<p));
}
int clearbit(int n , int p)
{
    int x = (~(1<<p));
    return (n & x);
}
int updatebit(int n,int p,int val)
{
    int x = ~(1<<p);
    n = n & x;
    return (n | val<<p);
}
int main()
{
    int n;
    cin>>n;
    cout<<getbit(n,1)<<endl;
    // cout<<setbit(n,3)<<endl;
    // cout<<clearbit(n,2)<<endl;
    cout<<updatebit(n,2,2)<<endl;
    


}