// #include <iostream>
// #include <stack>
// using namespace std;
// int precedence_checker(char a)
// {

//     if (a == '^')
//     {
//         return 3;
//     }
//     else if (a == '*' || a == '/')
//     {
//         return 2;
//     }
//     else if (a == '+' || a == '-')
//     {
//         return 1;
//     }
//     else
//     {
//         return -1;
//     }
// }
// string infix_to_postfix(string s)
// {
//     stack<char> st;
//     string ans = "";
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[i] >= 'a' && s[i] <= 'z')
//         {
//             ans = ans + s[i];
//         }
//         else if (s[i] == '(')
//         {
//             st.push(s[i]);
//         }
//         else if (s[i] == ')')
//         {
//             while (!st.empty() && st.top() != '(')
//             {
//                 ans += st.top();
//                 st.pop();
//             }
//             if (!st.empty())
//             {
//                 st.pop();
//             }
//         }
//         else
//         {
//             while (!st.empty() && precedence_checker(st.top()) > precedence_checker(s[i]))
//             {
//                 ans += st.top();
//                 st.pop();
//             }
//             st.push(s[i]);
//         }
//     }
//     while(!st.empty())
//     {
//         ans += st.top();
//         st.pop();
//     }
//     return ans;
// }
// int main()
// {
    
//     cout << infix_to_postfix("(a-b/c)*(a/k-l)") << endl;
// }
#include<iostream>
// #include<string>
using namespace std;
class node
{
public : 
    int data;
    node* next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
    
};
class stack
{
public :
    node* top;
    stack()
    {
        top = NULL;
    }
    void push(int val)
    {
        node*n = new node(val);
        if(top == NULL)
        {
            top = n;
            return;
        }
        top->next = n;
        top = n;
    }
    void pop()
    {
        if(top == NULL)
        {
            cout<<"Stack is empty"<<endl;
            return;
        }
        top = top->next;
    }
    bool empty()
    {
        if(top == NULL)
        {
            return true;
        }
        return false;
    }
    int t()
    {
        return top->data;
    }
};
int checkRank(char a)
{
    if(a == '^')
    {
        return 3;
    }
    else if(a == '*' || a == '/')
    {
        return 2;
    }
    else if(a == '+' || a == '-')
    {
        return 1;
    }
    else
    {
        return -1;
        
    }
}
string infixtopostfix(string s)
{
    stack st;
string ans = "";
    for(int i=0;i<s.length();i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= '0'&& s[i] <= '9')
        {
            ans = ans + s[i];
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (!st.empty() && st.t() != '(')
            {
                ans += st.t();
                st.pop();
            }
            if (!st.empty())
            {
                st.pop();
            }
        }
        else
        {
            while (!st.empty() && checkRank(s[i])<=checkRank(st.t()))
            {
                ans += st.t();
                st.pop();
            }
            st.push(s[i]);
        }
        
    }
    while(!st.empty())
    {
        ans += st.t();
        st.pop();
    }
    return ans;
    
    
}
int main()
{
   string q;
   cin>>q;
   cout<<infixtopostfix(q);
    
}