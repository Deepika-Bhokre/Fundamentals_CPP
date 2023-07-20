#include <iostream>
using namespace std;
#define n 100
class stack
{
    int *arr;
    int top;

public:
    stack()
    {
        arr = new int[n];
        top = -1;
    }
    void push(int val)
    {
        if (top == n - 1)
        {
            cout << "stack Overflow" << endl;
            return;
        }
        top++;
        arr[top] = val;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow" << endl;
            return;
        }
        arr[top] = '\0';
        top--;
    }
    int topofstack()
    {
        if (top == -1)
        {
            cout << "no elements in stack" << endl;
            return 0;
        }
        return arr[top];
    }
    bool empty()
    {
        return (top == -1);
    }
    void display()
    {
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " ";
        }
    }
};
int main()
{
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.pop();
    cout<<s.empty()<<endl;
    cout<<s.topofstack()<<endl;
    s.display();
}