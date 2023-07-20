#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"* ";   
        }
        for(int k=2*n-2*i-2;k>0;k--)
        {
            cout<<"  ";
        }
        for(int l=0;l<=i;l++)
        {
            cout<<"* ";
        }
        cout<<endl;  
    }
    for(int i=n;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            cout<<"* ";   
        }
        for(int k=2*n-2*i;k>0;k--)
        {
            cout<<"  ";
        }
        for(int l=0;l<i;l++)
        {
            cout<<"* ";
        }
        cout<<endl;  
    }
}