
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int k;
    cin>>k;
    int r = n-1;
    int c = 0;
    bool found = false;
    while(c < m && r >=0)
    {
        if(k == arr[r][c])
        {
            found = true;
            break;
        }
        if(k > arr[r][c])
        {
            r++;
        }
        if(k < arr[r][c])
        {
            c--;
        }
    }
    if(found == true)
    {
        cout<<"element found"<<endl;
    }
    else
    {
         cout<<"not element found"<<endl;
    }


    
    
}