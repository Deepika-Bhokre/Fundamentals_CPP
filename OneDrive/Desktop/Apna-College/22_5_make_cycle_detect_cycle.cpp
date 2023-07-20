#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
int noOfNodes = 0;
void insertatend(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    ++noOfNodes;
}
void insertAtStart(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    n->next = head;
    head = n;
    ++noOfNodes;
}
void insertion(node *&head, int val, int pos)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    if (pos == 0)
    {
        insertAtStart(head, val);
    }
    if (pos == noOfNodes + 1)
    {
        insertatend(head, val);
    }
    node *temp = head;
    if (pos > 0 && pos < noOfNodes)
    {
        for (int i = 0; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        n->next = temp->next;
        temp->next = n;
        noOfNodes++;
    }
}

void deleteAtStart(node *&head)
{
    if (head == NULL)
    {
        cout << "The Linked List is empty" << endl;
        return;
    }
    node *temp = head;
    head = head->next;
    delete temp;
    --noOfNodes;
}
void deleteAtend(node *&head)
{
    if (head == NULL)
    {
        cout << "The Linked List is empty" << endl;
        return;
    }
    node *temp = head;
    node *prev;
    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    delete temp;
    --noOfNodes;
}
void deletion(node *&head, int key)
{
    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL)
    {
        deleteAtStart(head);
        return;
    }
    node *temp = head;
    while (temp->next->data != key)
    {
        temp = temp->next;
    }
    node *n = temp->next;
    temp->next = temp->next->next;
    delete n;
    --noOfNodes;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "-> ";
        temp = temp->next;
        // cout<<noOfNodes<<endl;
    }
    cout << "NULL" << endl;
}
void makecycle(node *&head, int pos)
{
    node *temp = head;
    node *startnode;
    int count = 1;
    while (temp->next != NULL)
    {
        if (count == pos)
        {
            startnode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startnode;
}
bool check(node *&head)
{
    node *fast = head;
    node *slow = head;
    while (fast != NULL && fast->next != NULL)
    {
        if (fast == slow)
        {
            return true;
        }
        fast = head->next->next;
        slow = head->next;
    }
    return false;
}
void removecycle(node *&head)
{
    node *fast = head;
    node *slow = head;
   
        do
        {
            fast = head->next->next;
            slow = head->next;
        } while (fast != slow);
        fast = head;
        while (fast->next != slow->next)
        {
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = NULL;
    
}
int main()
{
    node *head = NULL;
    insertatend(head, 1);
    insertatend(head, 2);
    insertatend(head, 3);
    insertatend(head,4);
    // insertion(head, 4, 3);
    display(head);
    makecycle(head, 2);
    cout << check(head) << endl;
    removecycle(head);
    cout << check(head) << endl;
    display(head);
}