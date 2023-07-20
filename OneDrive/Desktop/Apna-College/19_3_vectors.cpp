#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    // for(int i=0;i<5;i++)
    // {
    //     v.push_back(i);
    // }
    v.push_back(11);
    v.push_back(298);
    v.push_back(34);
    v.push_back(4);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    for (auto element : v)
    {
        cout << element << " ";
    }
    cout << endl;
    v.pop_back();
    vector<int> v2(3, 10);
    swap(v, v2);
    for (auto element : v)
    {
        cout << element << " ";
    }
    cout << endl;
    for (auto element : v2)
    {
        cout << element << " ";
    }
     cout << endl;
    sort(v2.begin(), v2.end());
    for (auto element : v2)
    {
        cout << element << " ";
    }
}