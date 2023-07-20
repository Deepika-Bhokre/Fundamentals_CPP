// #include <iostream>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *next;
//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };
// class queue
// {
//     node *front;
//     node *back;

// public:
//     queue()
//     {
//         front = NULL;
//         back = NULL;
//     }
//     void enqueque(int val)
//     {
//         node *n = new node(val);
//         if (front == NULL)
//         {
//             back = n;
//             front = n;
//             return;
//         }
//         back->next = n;
//         back = n;
//     }
//     void dequeue()
//     {
//         if (front == NULL)
//         {
//             cout << "Queue is empty" << endl;
//             return;
//         }
//         node *temp = front;
//         front = front->next;
//         delete temp;
//     }
//     int peek()
//     {
//         if (front == NULL)
//         {
//             cout << "Queue is empty" << endl;
//             return -1;
//         }
//         return front->data;
//     }
//     bool empty()
//     {
//         if (front == NULL)
//         {

//             return true;
//         }
//         return false;
//     }
//     void display()
//     {
//         node *temp = front;
//         while (temp != NULL)
//         {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//     }
// };

// int main()
// {
//     queue q;
//     q.enqueque(1);
//     q.enqueque(2);
//     q.enqueque(3);
//     q.dequeue();
//     cout<<q.peek()<<endl;
//     q.display();
// }
#include<iostream>
#include<string>
using namespace std;
class node
{
public : 
    int data;
    node* next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
    
};
class stack
{
public :
    node* top;
    stack()
    {
        top = NULL;
    }
    void push(int val)
    {
        node*n = new node(val);
        if(top == NULL)
        {
            top = n;
            return;
        }
        n->next = top;
        top = n;
    }
    void pop()
    {
        if(top == NULL)
        {
            cout<<"Stack is empty"<<endl;
            return;
        }
        node* temp = top;
        top = top->next;
        delete temp;
    }
    bool empty()
    {
        if(top == NULL)
        {
            return true;
        }
        return false;
    }
    int t()
    {
        return top->data;
    }
};
int checkRank(char a)
{
    if(a == '^')
    {
        return 3;
    }
    else if(a == '*' || a == '/' || a== '%')
    {
        return 2;
    }
    else if(a == '+' || a == '-')
    {
        return 1;
    }
    else
    {
        return -1;
        
    }
}
string infixtopostfix(string s)
{
    stack st;
    string ans = " ";
    for(int i=0;i<s.length();i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= '0'&& s[i] <= '9')
        {
            ans += s[i];
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (!st.empty() && st.t() != '(')
            {
                ans += st.t();
                st.pop();
            }
            if (!st.empty())
            {
                st.pop();
            }
        }
        else
        {
            while (!st.empty() && checkRank(s[i]) <= checkRank(st.t()))
            {
                ans += st.t();
                st.pop();
            }
            st.push(s[i]);
        }
        
    }
    while(!st.empty())
    {
        ans += st.t();
        st.pop();
    }
    return ans;
    
    
}
int main()
{
   string q;
   cin>>q;
   string ans = infixtopostfix(q);
   cout<<ans;
    
}