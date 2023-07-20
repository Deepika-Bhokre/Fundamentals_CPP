#include <bits/stdc++.h>
using namespace std;
class stac
{
    int N;
    queue<int> q1;
    queue<int> q2;

public:
    stac()
    {
        N = 0;
    }
    void push(int val)
    {
        q2.push(val);
        N++;
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }
    void pop()
    {
        q1.pop();
        N--;
    }
    int top()
    {
        return q1.front();
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
    s.push(5);
    s.pop();
    s.push(6);
    //  s.pop();
    cout<<s.size()<<endl;
    s.display();
}