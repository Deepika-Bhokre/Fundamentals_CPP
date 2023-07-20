#include <iostream>
#include <stack>
using namespace std;
class queue
{
    stack<int> st1;
    stack<int> st2;

public:
    void enqueue(int val)
    {
        st1.push(val);
    }
    int dequeue()
    {
        if (st1.empty() && st2.empty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        if (st2.empty())
        {
            while (!st1.empty())
            {
                int temp = st1.top();
                st1.pop();
                st2.push(temp);
            }
        }
        int topval = st2.top();
        st2.pop();
        return topval;
    }
    bool empty()
    {
        if (st1.empty() && st2.empty())
        {
            return true;
        }
        return false;
    }
    void display()
    {
        if (st1.empty() && st2.empty())
        {
            return;
        }
        while (!st1.empty() ||  !st2.empty())
        {
            if (st2.empty())
            {
                while (!st1.empty())
                {
                    int temp = st1.top();
                    st1.pop();
                    st2.push(temp);
                }
            }
            while (!st2.empty())
            {
                cout << st2.top() << " ";
                st2.pop();
            }
        }
    }
};

int main()
{
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    // cout<<q.dequeue()<<endl;
    q.dequeue();
    q.dequeue();
    // q.dequeue();
    // q.dequeue();
    q.enqueue(6);
    q.dequeue();
    cout << q.empty() << endl;
    q.display();
}