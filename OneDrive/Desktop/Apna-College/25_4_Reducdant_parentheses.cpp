#include<iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;
bool redandant_parentheses(string s)
{
    stack<char> st;
    bool ans=false;
    for(int i=0;i<s.size();i++)
    {
       
        if(s[i] == ')')
        {
            if(st.top() == '(')
            {
                ans = true;
            }
            while(st.top() != '(')
            {
                st.pop();
            }
            st.pop();
        }
        else
        {
            st.push(s[i]);
        }
    }
    return ans;
}

int main()
{
    // string s;
    // cin>>s;
    cout<<redandant_parentheses("((a+b)(+ c))");


}
