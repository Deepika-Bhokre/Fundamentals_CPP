#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
void threesum(vector<int> v, int target)
{
    sort(v.begin(), v.end());
    bool found = false;
    for (int i = 0; i < v.size(); i++)
    {
        int lo = i + 1;
        int hi = v.size() - 1;
        while (lo < hi)
        {
            int current = v[i] + v[lo] + v[hi];
            if (current == target)
            {
                found = true;
            }
            else if (current < target)
            {
                lo++;
            }
            else
            {
                hi--;
            }
        }
    }
    if (found)
    {
        cout << true << endl;
    }
    else
    {
        cout << false << endl;
    }

    // for(auto element : v)
    // {
    //     cout<<element<<" ";
    // }
    // cout<<endl;
    // int *p1 = NULL;
    // int *p2 = NULL;
    // int fix = 0;
    // for (int i = 0; i < v.size() - 2; i++)
    // {
    //     fix = v[i];
    //     cout <<"fix = "<<fix << " ";
    //     p1 = &v[i + 1];
    //     cout <<"*p1 = "<< *p1 << " ";
    //     p2 = &v.back();
    //     cout << "*p2 = "<<*p2 << " ";
    //     int j = 0;
    //     cout <<" *p1 + *p2 = "<< *p1 + *p2 <<endl;
    //     while ((v.size() - j - 1))
    //     {
    //         cout <<endl<< "j = " << j<<" ";
    //         cout <<"(target - fix)" <<(target - fix) << " ";
    //         if ((*p1 + *p2) == (target - fix))
    //         {
    //             return true;
    //         }

    //         else if ((*p1 + *p2) > (target - fix))
    //         {
    //             p2--;
    //             cout<<"(*p1 + *p2) > target-fix"<<" ";
    //             cout << *p2 << " ";
    //         }
    //         else
    //         {
    //             p1++;
    //             cout<<"(*p1 + *p2) < target-fix"<<" ";
    //             cout << *p1 << " ";
    //         }
    //         j++;
    //     }
    //     cout<<endl;
    // }
    // return false;
}
int main()
{
    int n;
    cin >> n;
    int target;
    cin >> target;
    vector<int> v = {6, 7, 8, 2, 9, 5, 12, 45};
    // for(auto &i : v)
    // {
    //     cin >> i;
    // }
    threesum(v, target);
}