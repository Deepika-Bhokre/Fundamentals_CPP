// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     cin.ignore();
//     char arr[n + 1];
//     cin.getline(arr, n);
//     cin.ignore();
//     int curr = 0;
//     int max = 0;
//     int i = 0;
//     int st = 0;
//     int ma = 0;
//     while (1)
//     {
//         if (arr[i] == ' ' || arr[i] == '\0')
//         {
//             if (curr > max)
//             {
//                 max = curr;
//                 ma = st;

//             }
//             curr = 0;
//             st = st + i;
//         }
//         else
//         {
//             curr++;
//             if (arr[i] == '\0')
//             {

//                 break;
//             }

//         }
//         i++;
//     }
//     cout << max << endl;
//     cout <<arr[ma]<< endl;
// }
#include <iostream>
using namespace std;
// function to find longest word
int word_length(string str)
{
    int len = str.length();
    int temp = 0;
    int newlen = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] != ' ')
            newlen++;
        else
        {
            temp = max(temp, newlen);
            newlen = 0;
        }
    }
    return max(temp, newlen);
}
int main()
{
    string str ;
    cin>>str;
    cout << "maximum length of a word is : " << word_length(str);
    return 0;
}