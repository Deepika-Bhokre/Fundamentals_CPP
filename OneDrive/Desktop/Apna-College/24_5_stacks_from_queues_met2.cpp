#include <bits/stdc++.h>
using namespace std;
class stac
{
    int N = 0;
    queue<int> q1;
    queue<int> q2;

public:
    stac()
    {
        N = 0;
    }
    void push(int val)
    {
        q1.push(val);
        N++;
    }
    void pop()
    {
        int t = N - 1;
        while (t)
        {
            q2.push(q1.front());
            q1.pop();
            t--;
        }
        cout << q1.front() << endl;
        q1.pop();
        queue<int> temp = q2;
        q2 = q1;
        q1 = temp;
        N--;
    }
    // int top()
    // {
    //     int t = N - 1;
    //     while (t)
    //     {
    //         q2.push(q1.front());
    //         q1.pop();
    //         t--;
    //     }
    //     cout << q1.front() << endl;
    //     q1.pop();
    //     queue<int> temp = q2;
    //     q2 = q1;
    //     q1 = temp;
    // }
    int top()
    {
        if (q1.empty())
        {
            return -1;
        }
        while (q1.size() != 1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int ans = q1.front();
        q2.push(ans);
        queue<int> temp = q2;
        q2 = q1;
        q1 = temp;
    }
    int size()
    {
        return N;
    }
    void display()
    {
        while (!q1.empty())
        {
            cout << q1.front() << " ";
            q1.pop();
        }
    }
};
int main()
{
    stac s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.pop();
    cout<<s.size()<<endl;
    s.display();
}
