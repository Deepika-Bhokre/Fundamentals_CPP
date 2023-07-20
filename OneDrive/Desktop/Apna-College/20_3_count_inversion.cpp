#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// void merge(int arr[], int l, int m, int r)
// {
//     int i = l;
//     int j = m + 1;
//     int ans[l + r + 1];
//     int k = 0;
//     while (i <= m && j <= r)
//     {
//         if (arr[i] > arr[j])
//         {
//             ans[k++] = arr[j++];
//         }
//         else if (arr[j] > arr[i])
//         {
//             ans[k++] = arr[i++];
//         }
//     }
//     while (i <= m)
//     {
//         ans[k++] = arr[i++];
//     }
//     while (j <= r)
//     {
//         ans[k++] = arr[j++];
//     }
//     k = 0;
//     for (int i = l; i <= r; i++)
//     {
//         arr[i] = ans[k++];
//     }
// }
//     void MergeSort(int arr[], int l, int r)
//     {
//         if (l >= r)
//         {
//             return;
//         }
//         int m = (l + r) / 2;
//         MergeSort(arr, l, m);
//         MergeSort(arr, m + 1, r);
//         merge(arr, l, m, r);
//     }

//     // void CountInversion(int arr[], int n)
//     // {
//     // }

int main()
{
    int arr[] = {3,5,6,9,1,2,7,8};
    int n = (sizeof(arr) / sizeof(arr[0]));
    cout << n << endl;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back(make_pair(arr[i], i));
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << " ";
        cout << v[i].second << " ";
        cout << endl;
    }
    int count = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if(v[i].second < v[j].second)
            {
                cout<<"( "<<v[i].first<<" "<<v[j].first<<" )"<<endl;
                count++;
            }
        }
        
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i].first << " ";
    //     cout << v[i].second << " ";
    //     cout << endl;
    // }
    cout<<count<<endl;


}