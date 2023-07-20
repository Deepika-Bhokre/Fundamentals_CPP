#include<iostream>
#include<stack>
using namespace std;
void reverse_sentence(string s)
{
    stack<string> st;
    int n = s.length();
    for(int i=0;i<n;i++)
    {
        string word = "";
        while(s[i] != ' ' && i<n)
        {
            word += s[i];
            i++;
        }
        st.push(word);
    }
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main()
{
    string s = "hey , how are u dng ?";
    reverse_sentence(s);



}