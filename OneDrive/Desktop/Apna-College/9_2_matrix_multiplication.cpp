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
    int m1;
    cin >> m1;
    int arr1[m][m1];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            cin >> arr1[i][j];
        }
    }
    int sum = 0;
    int ans[n][m1];
    for (int i = 0; i < n; i++)
    {
        
       
        for (int j = 0; j < m1; j++)
        { 
            sum = 0;
            {
                for (int k = 0; k < m; k++)
                {
                    sum = sum + arr[i][k] * arr1[k][j];
                }
                ans[i][j] = sum;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}