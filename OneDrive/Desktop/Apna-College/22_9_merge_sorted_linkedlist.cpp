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
node *head2 = NULL;
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

node *merge(node *&head, node *&head1)
{
    node *temp = head;
    node *temp1 = head1;
    
   
    while (temp != NULL && temp1 != NULL)
    {
        if (temp->data > temp1->data)
        {
            InsertatEnd(head2, temp1->data);
            temp1 = temp1->next;
        }
        else
        {
            InsertatEnd(head2, temp->data);
            temp = temp->next;
        }
    }
    while(temp != NULL)
    {
        InsertatEnd(head2,temp->data);
        temp = temp->next; 
    }
    while(temp1 != NULL)
    {
        InsertatEnd(head2,temp1->data);
        temp1 = temp1->next;
        
    }

    return head2;
}
node *mergerecursive(node*&head,node*&head1)
{
    node*result ;
    if(head == NULL)
    {
        return head1;
    }
    if(head1 == NULL)
    {
        return head;
    }
    if(head->data > head1->data)
    {
        result = head1;
        result->next = mergerecursive(head,head1->next);
    }
    else
    {
        result = head;
        result->next = mergerecursive(head->next,head1);

    }
    return result;

}

int main()
{
    node *head = NULL;
    node *head1 = NULL;

    InsertatEnd(head, 1);
    InsertatEnd(head, 4);
    InsertatEnd(head, 5);
    InsertatEnd(head, 7);
    InsertatEnd(head1, 2);
    InsertatEnd(head1, 3);
    InsertatEnd(head1, 6);

    display(head);
    display(head1);
    node * n = mergerecursive(head,head1);
    display(n);

    
}