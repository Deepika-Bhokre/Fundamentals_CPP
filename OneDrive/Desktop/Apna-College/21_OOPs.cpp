#include <iostream>
using namespace std;
class student
{
    string name;

public:
    
    int age;
    bool gender;
    // constructors
    student()
    {
        cout << "Default constructor called " << endl;
    }
    student(string n, int a, bool g)
    {
        cout << "Parametarized constructor called " << endl;
        name = n;
        age = a;
        gender = g;
    }
    student(student &a)
    {
        cout << "Copy constructor called " << endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }
    // Destructor
    ~student()
    {
        cout << "Destructor called " << endl;
    }
    bool operator==(student &a)
    {
        if (name == a.name && age == a.age && gender == a.gender)
        {
            return true;
        }
        return false;
    }
    string getName()
    {
        return name;
    }
    void setName(string s)
    {
        name = s;
    }
    void printinfo()
    {
        cout << name << endl;
        cout << age << endl;
        cout << gender << endl;
    }
};
int main()
{
    student arr[3];
    for (int i = 0; i < 3; i++)
    {

        cout << "Name : " << endl;
        string s;
        cin >> s;
        arr[i].setName(s);
        // cin >> arr[i].name;
        cout << "age : " << endl;
        cin >> arr[i].age;
        cout << "gender : " << endl;
        cin >> arr[i].gender;
        arr[i].printinfo();
    }
    student a = student("Deepika", 19, 1);
    student b = student("Manish", 19, 0);
    cout << b.getName() << endl;
    student c = a;
    if (c == a)
    {
        cout << "same" << endl;
    }
    else
    {
        cout << "not same " << endl;
    }
    return 0;
}