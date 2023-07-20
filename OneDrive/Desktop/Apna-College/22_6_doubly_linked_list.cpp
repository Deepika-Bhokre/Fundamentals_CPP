#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *prev;
    node *next;
    node(int val)
    {
        data = val;
        prev = NULL;
        next = NULL;
    }
};
int NoOfNodes = 1;
void InsertatEnd(node *&head, int val)
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
    n->prev = temp;
    temp->next = n;
    // n->next = NULL;
    NoOfNodes++;
}
void InsertatStart(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    if (head != NULL)
    {
        head->prev = n;
    }
    head = n;
    NoOfNodes++;
}
node *insertion(node *&head, int pos, int val)
{
    node *n = new node(val);
    if (head == NULL && pos == 0)
    {
        InsertatStart(head, val);
        return 0;
    }
    // if (pos == 0)
    // {
    //     InsertatStart(head, val);
    //     // return 0;
    // }
    if ( pos == NoOfNodes - 1)
    {
        InsertatEnd(head, val);
        return 0;
    }
    node *temp = head;
    if (pos > 0 && pos < (NoOfNodes - 1))
    {
        for (int i = 0; i < pos; i++)
        {
            temp = temp->next;
        }
        n->next = temp->next;
        temp->next = n;
        n->prev = temp;
        NoOfNodes++;
    }
    return 0;
}
void deletionatStart(node *&head)
{
    if (head == NULL)
    {
        cout << "Empty List" << endl;
        return;
    }
    node *temp = head;
    temp->next->prev = NULL;
    head = temp->next;
    delete temp;
    NoOfNodes--;
}
void deletionatEnd(node *&head)
{
    if (head == NULL)
    {
        cout << "Empty List" << endl;
        return;
    }
    node *temp = head;
    node *pre;
    while (temp->next != NULL)
    {
        pre = temp;
        temp = temp->next;
    }
    temp->prev = NULL;
    pre->next = NULL;
    delete temp;
    NoOfNodes--;
}
node *deletion(node *&head, int pos)
{

    if (head == NULL || pos == 0)
    {
        deletionatStart(head); 
        // return;
    }
    if(pos == NoOfNodes-1)
    {
        deletionatEnd(head);
        return 0;
    }
    node *temp = head;
    if(pos > 0 && pos < (NoOfNodes-1))
    {
        for(int i=0;i<pos-1;i++)
        {
            temp = temp->next;
        }
        node *n = temp->next;
        temp->next = temp->next->next;
        temp->next->prev = temp;
        delete n; 
    }
    return 0;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "-> ";
        temp = temp->next;
        // cout<<NoOfNodes<<endl;
    }
    cout << "NULL" << endl;
}
int main()
{
    node *head = NULL;
    // InsertatEnd(head, 1);
    // InsertatEnd(head, 2);
    // InsertatEnd(head, 3);
    // InsertatStart(head, 0);
    insertion(head, 0, 4);
    insertion(head, 1, 3);
    insertion(head, 2, 2);
    insertion(head, 3, 1);
    // deletionatStart(head);
    // deletionatEnd(head);
    deletion(head,0);
    display(head);
}