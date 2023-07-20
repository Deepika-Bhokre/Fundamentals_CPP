#include <iostream>
#include <stack>
#include<math.h>
using namespace std;

int prefix(string st)
{
    stack<int> s;
    int ans = 0;
    int n = st.length();
    for (int i = n - 1; i >= 0; i--)
    {
        if (st[i] >= '0' && st[i] <= '9')
        {
            s.push(st[i] - '0');
            // cout << st[i] - '0' << endl;
        }
        else
        {
            int op1 = s.top();
            s.pop();
            int op2 = s.top();
            s.pop();
            switch (st[i])
            {
            case '+':
                s.push(op1 + op2);
                break;
            case '-':
                s.push(op1 - op2);
                break;
            case '*':
                s.push(op1 * op2);
                break;
            case '/':
                s.push(op1 / op2);
                break;
            case '^':
                s.push(pow(op1,op2));
                break;

            default:
                cout<<"enter correct input"<<endl;
                break;
            }
        }
        //     else if (st[i] == '*')
        //     {
        //         int op1 = s.top();
        //         s.pop();
        //         int op2 = s.top();
        //         s.pop();
        //         ans = op1 * op2;
        //         cout << ans << endl;
        //         s.push(ans);
        //     }
        //     else if (st[i] == '/')
        //     {
        //         int op1 = s.top();
        //         s.pop();
        //         int op2 = s.top();
        //         s.pop();
        //         ans = op1 / op2;
        //         cout << ans << endl;
        //         s.push(ans);
        //     }
        //     else if (st[i] == '-')
        //     {
        //         int op1 = s.top();
        //         s.pop();
        //         int op2 = s.top();
        //         s.pop();
        //         ans = op1 - op2;
        //         cout << ans << endl;
        //         s.push(ans);
        //     }
        //     else if (st[i] == '+')
        //     {
        //         int op1 = s.top();
        //         s.pop();
        //         int op2 = s.top();
        //         s.pop();
        //         ans = op1 + op2;
        //         cout << ans << endl;
        //         s.push(ans);
        //     }
        //     else if (st[i] == '^')
        //     {
        //         int op1 = s.top();
        //         s.pop();
        //         int op2 = s.top();
        //         s.pop();
        //         ans = op1 ^ op2;
        //         cout << ans << endl;
        //         s.push(ans);
        //     }
        // }
        // cout << ans;
    }
    return s.top();

}
    int main()
    {

        string st;
        cin >> st;
        cout<<prefix(st)<<endl;
    }