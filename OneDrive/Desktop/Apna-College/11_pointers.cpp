#include <iostream>
using namespace std;
int main()
{
    // int a = 10;
    // char b = 'a';
    // char * p=&b;
    // int *apr = &a;
    // cout<<apr<<" "<<*apr<<" "<<a<<" "<<&a<<endl;
    // *apr = 20;
    // cout<<a<<" "<<p<<" "<<*p<<endl;
    // apr++;
    // p++;
    // // p=&b;

    // cout<<apr<<endl;
    // cout<<p<<" "<<*p<<endl;
    // int arr[]={1,2,3,4};
    // int *pt = arr;
    // for(int i=0;i<4;i++)
    // {
    //     cout<<*pt<<" ";
    //     pt++;
    //     cout<<*(arr+i)<<" ";
    // }
    int a = 10;
    int *p = &a;
    int **q = &p;
    cout << a << endl;
    cout << *p << endl;
    cout << **q << endl;
    cout << &a << endl;
    cout << *q << endl;
    cout << p << endl;
    cout<<&p<<endl;
    cout << q << endl;
}