#include<bits/stdc++.h>
using namespace std;
int binary_to_decimal(int n)
{
    int p = 1;
    int ans=0;
    while(n>0)
    {
        int l = n%10;
        ans = ans + l*p;
        p *= 2;
        n = n /10;
    }
    return ans;

}
int octal_to_decimal(int n)
{
    int p = 1;
    int ans=0;
    while(n>0)
    {
        int l = n%10;
        ans = ans + l*p;
        p *= 8;
        n = n /10;
    }
    return ans;

}
int hexadecimal_to_decimal(string m)
{
    int p = 1;
    int ans = 0;
    int s = m.size();
    for(int i=s-1;i>=0;i--)
    {
        if(m[i] >= '0' &&  m[i] <='9')
        {
            ans += p*(m[i]-'0');
        }
        else if(m[i]>='A' && m[i]<= 'F' )
        {
            ans += p*(m[i]-'A' + 10);
        }
        p*=16;

    }
    return ans;
    
    
        
}
int main()
{
    int n;
    cin>>n;
    string m;
    cin>>m;
    cout<<binary_to_decimal(n)<<" ";
    cout<<octal_to_decimal(n)<<" ";
    cout<<hexadecimal_to_decimal(m)<<" ";
}