#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char arr[n];
    cin >> arr;
    // int n =0;
    // while(arr[n] != '\0')
    // {
    //     n++;
    // }
    // cout<<n<<endl;
    bool flag = 0;
    for (int i = 0; i < n/2; i++)
    {
        // if (arr[i] == arr[n - i - 1])
        // {
        //     continue;
        // }
        // else
        // {
        //     flag=1;
        //     break;
        // }
        if (arr[i] != arr[n - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if(flag)
    {
        cout<<"its not a palindrome"<<endl;
    }
    else
    {
        cout<<"its  a palindrome"<<endl;
        
    }
}