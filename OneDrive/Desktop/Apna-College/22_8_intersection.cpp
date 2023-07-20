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
    if (pos == NoOfNodes - 1)
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
int length(node *head)
{
    int l = 0;
    node *temp = head;
    while (temp != NULL)
    {
        l++;
        temp = temp->next;
    }
    return l;
}
void intersect(node *&head, node *&head1, int pos)
{
    node *temp = head;
    pos--;
    while (pos--)
    {
        temp = temp->next;
    }
    node *temp1 = head1;
    while (temp1->next != NULL)
    {
        temp1 = temp1->next;
    }
    temp1->next = temp;
}
int intersection(node *&head, node *&head1)
{
    int l1 = length(head);
    // cout<<l1<<endl;
    int l2 = length(head1);
    //  cout<<l2<<endl;
    int d = 0;
    node *ptr1;
    node *ptr2;
    if (l1 > l2)
    {
        d = l1 - l2;
        ptr1 = head;
        ptr2 = head1;
    }
    else
    {
        d = l2 - l1;
        ptr2 = head;
        ptr1 = head1;
    }
    cout << d << endl;
    while (d)
    {
        ptr1 = ptr1->next;
        if (ptr1 == NULL)
        {
            return -1;
        }
        d--;
        cout << d << endl;
    }
    cout << ptr1->data << endl;
    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1 == ptr2)
        {
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    return -1;
}
int main()
{
    node *head = NULL;
    node *head1 = NULL;
    // insertion(head, 0, 1);
    // insertion(head, 1, 2);
    // insertion(head, 2, 3);
    // insertion(head, 3, 4);
    // insertion(head, 4, 5);
    // insertion(head, 5, 6);
    // insertion(head1, 0, 9);
    // insertion(head1, 1, 10);
    InsertatEnd(head, 1);
    InsertatEnd(head, 2);
    InsertatEnd(head, 3);
    InsertatEnd(head, 4);
    InsertatEnd(head, 5);
    InsertatEnd(head, 6);
    InsertatEnd(head1, 9);
    InsertatEnd(head1, 10);
    intersect(head, head1, 5);
    display(head);
    display(head1);
    cout << intersection(head, head1);

    // deletion(head,0);
}