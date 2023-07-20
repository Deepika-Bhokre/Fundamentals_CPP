#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main()
{
    string str;
    cin>>str;
    
    // transform(str.begin(),str.end(),str.begin(),::toupper);
    // cout<<str<<endl;
    // transform(str.begin(),str.end(),str.begin(),::tolower);
    // cout<<str<<endl;

    //Upper
    // for(int i=0;i<str.length();i++)
    // {
    //     if(str[i] >= 'a' && str[i] <= 'z')
    //     {
    //         str[i] = str[i] - 32;
    //     }
    // }
    // cout<<str<<endl;
    // //lower
    // for(int i=0;i<str.length();i++)
    // {
    //     if(str[i] >= 'A' && str[i] <= 'Z')
    //     {
    //         str[i] = str[i] + 32;
    //     }
    // }
    // cout<<str<<endl;
    for(int i=0;i<str.length();i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
    cout<<str<<endl;
    
}