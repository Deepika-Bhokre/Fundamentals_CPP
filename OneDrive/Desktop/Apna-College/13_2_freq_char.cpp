#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    cin >> str;
    // int count = 1;
    // int maxi = INT_MIN;
    // sort(str.begin(), str.end(), less<char>());
    // cout << str << endl;
    // char c;
    // for (int i = 1; i < str.length(); i++)
    // {
    //     if (str[i-1] == str[i])
    //     {
    //         count++;
    //         continue;
            
    //     }
    //     else
    //     {
    //         maxi = max(maxi,count);
    //     }
    //     count = 1;
    // }
    // cout <<maxi<< endl;
    int freq[26] ;
    for(int i=0;i<26;i++)
    {
        freq[i] = 0;
    }   
    for(int i=0;i<str.size();i++)
    {
        freq[str[i]-'a']++;
    }
    char ans;
    int maxf = 0;
    for(int i=0;i<26;i++)
    {
        if(freq[i] > maxf)
        {
            maxf = freq[i];
            ans = i + 'a';
        }
    }
    cout<<maxf<<" "<<ans<<endl;
  
}