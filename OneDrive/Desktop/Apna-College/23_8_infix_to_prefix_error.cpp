#include<iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;
int prec(char c)
{
    if(c == '^')
    {
        return 3;
    }
    else if ( c== '*' || c == '/')
    {
        return 2;
    }
    else if(c== '+' || c=='-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
string infix_to_prefix(string s)
{
    stack<char>st;
    // reverse(s.begin(),s.end());
    cout<<s<<endl;
    string ans ="";
    int n = s.length();
    for(int i= n-1;i>=0;i--)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            ans += s[i];
        }
        else if(s[i] == ')')
        {
            st.push(s[i]);
        }
        else if(s[i] == '(')
        {
            while(!st.empty() && st.top() != ')')
            {
                ans += st.top();
                st.pop();
            }
            if(!st.empty())
            {
                st.pop();
            }
        }
        else
        {
            while(!st.empty() && prec(st.top() >= prec(s[i])))
            {
                ans += st.top();
                st.pop();

            }
            st.push(s[i]);
        }
    }
    while(!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    // reverse(ans.begin(),ans.end());
    return ans;
}

int main()
{
     cout<<infix_to_prefix("(a-b/c)*(a/k-l)")<<endl;
}