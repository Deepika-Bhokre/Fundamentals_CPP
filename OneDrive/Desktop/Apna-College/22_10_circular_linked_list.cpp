#include <iostream>
using namespace std;
class node
{
public:
    node *next;
    int data;
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

void display(node *head)
{
    node *temp = head;
    do
    {
        cout << temp->data << "-> ";
        temp = temp->next;
        // cout<<noOfNodes<<endl;
    } while (temp != head);
}
void display1(node *head)
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

// void circular(node *&head)
// {

//     node *temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = head;
// }
void circularinsertatend(node *&head, int val)
{
    node *temp = head;
    node *n = new node(val);
    if (head == NULL)
    {
        n->next = n;
        head = n;
        return;
    }
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    noOfNodes++;
}
void circularinsertatbegin(node *&head, int val)
{
    node *temp = head;
    node *n = new node(val);
    if (head == NULL)
    {
        n->next = n;
        head = n;
        return;
    }
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
    noOfNodes++;
}
void insertion(node *&head, int val, int pos)
{
    node *n = new node(val);
    if (pos == 0)
    {
        circularinsertatbegin(head, val);
        return;
    }
    cout << noOfNodes << endl;
    if (pos == noOfNodes + 1)
    {
        circularinsertatend(head, val);
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
void deleteathead(node *&head)
{
    if (head == NULL)
    {
        cout << "Circular list is empty" << endl;
        return;
    }
    node *todelete = head;
    node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = head->next;
    head = head->next;
    delete todelete;
}
void deletion(node *&head, int pos)
{
    if (head == NULL || pos == 1)
    {
        deleteathead(head);
        return;
    }
    node *temp =head;
    int count = 1;
    while(count != pos-1)
    {
        temp = temp ->next;
        count++;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

int main()
{
    node *head = NULL;
    // insertion(head, 1, 0);
    // insertion(head, 2, 1);
    // insertion(head, 3, 2);
    // insertion(head, 4, 3);
    // circular(head);
    circularinsertatbegin(head, 5);
    circularinsertatbegin(head, 4);
    circularinsertatbegin(head, 3);
    circularinsertatbegin(head, 2);
    circularinsertatend(head, 1);
    insertion(head, 10, 5);
    deleteathead(head);
    deletion(head,3);
    display(head);
}