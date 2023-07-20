#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    string str1(5, 'n');
    // cin >> str;
    cout << str << endl;
    cout << str1 << endl;
    getline(cin, str);
    cout << str;
}