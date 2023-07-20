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
    if (head == NULL && pos == 0)
    {
        insertAtStart(head, val);
        return;
    }
    cout << noOfNodes << endl;
    if (pos == noOfNodes + 1)
    {
        insertatend(head, val);
        return;
    }
    node *temp = head;
    if (pos > 0 && pos <= noOfNodes)
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
int main()
{
    node *head = NULL;
    // insertatend(head, 1);
    // insertatend(head, 2);
    // insertatend(head, 3);
    // deletion(head, 2);
    // display(head);
    // insertAtStart(head, 4);
    // deleteAtStart(head);
    // deleteAtend(head);
    insertion(head, 1, 0);
    insertion(head, 2, 1);
    insertion(head, 3, 2);
     insertion(head, 4, 3);
    insertion(head, 2, 1);
    insertion(head, 3, 2);
    display(head);
}