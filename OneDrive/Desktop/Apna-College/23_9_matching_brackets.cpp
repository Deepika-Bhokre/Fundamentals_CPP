#include <iostream>
#include <stack>
using namespace std;
bool parenthesis_checker(string s)
{
    stack<char> st;
    int n = s.length();
    

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '{' || s[i] == '[' || s[i] == '(')
        {
            st.push(s[i]);
        }
        // else if (st.top() == '{' && s[i] == '}')
        // {
        //     st.pop();
        // }
        // else if (st.top() == '[' && s[i] == ']')
        // {
        //     st.pop();
        // }
        // else if (st.top() == '(' && s[i] == ')')
        // {
        //     st.pop();
        // }
        // else
        // {
        //     continue;
        // }
        else if (st.top() == '{')
        {
            if (s[i] == '}')
            {
                st.pop();
            }
            else
            {
                return false;
                break;
            }
        }
         else if (st.top() == '[')
        {
            if (s[i] == ']')
            {
                st.pop();
            }
            else
            {
                return false;
                break;
            }
        }
         else if (st.top() == '(')
        {
            if (s[i] == ')')
            {
                st.pop();
            }
            else
            {
                return false;
                break;
            }
        }
        
    }
    return true;
}

int main()
{
    string s;
    cin >> s;
    cout << parenthesis_checker(s) << endl;
}
