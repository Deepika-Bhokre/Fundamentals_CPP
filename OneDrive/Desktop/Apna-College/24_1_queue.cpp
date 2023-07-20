#include <iostream>
using namespace std;
#define n 10
class queue
{
    int *arr;
    int front;
    int rear;

public:
    queue()
    {
        arr = new int[n];
        front = -1;
        rear = -1;
    }
    void enqueue(int val)
    {
        if (rear == n - 1)
        {
            cout << "Queue is full" << endl;
            return;
        }
        arr[++rear] = val;
        if (front == -1)
        {
            front++;
        }
    }
    void dequeue()
    {
        if (front == -1 || front > rear)
        {
            cout << "No elements in the queue" << endl;
            return;
        }
        arr[front] = '\0';
        front++;
    }
    int peek()
    {
        if (front == -1 || front > rear)
        {
            cout << "No elements in the queue" << endl;
            return -1;
        }
        return arr[front];
    }
    bool empty()
    {

        return ((front ==  -1) || (front > rear));
    }

    void display()
    {
        for (int i = 0; i <= rear; i++)
        {
            cout << arr[i] << " ";
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
    q.dequeue();
    q.dequeue();
    q.dequeue();
    // q.dequeue();
    cout<<q.peek()<<endl;
    cout << q.empty() << endl;
    q.display();
}