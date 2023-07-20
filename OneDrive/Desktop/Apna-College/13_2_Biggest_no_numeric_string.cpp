#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main()
{
    string str;
    cin>>str;
    sort(str.begin(),str.end(),less<char>());
    // for(int i=0;i<str.length();i++)
    // {
    //     for(int j=i+1;j<str.length();j++)
    //     {
    //         if(str[i] < str[j])
    //         {
    //             char temp = str[i];
    //             str[i] = str[j];
    //             str[j] = temp;
    //         }

    //     }
    // }
    cout<<str<<endl;
    
   
    
    
}