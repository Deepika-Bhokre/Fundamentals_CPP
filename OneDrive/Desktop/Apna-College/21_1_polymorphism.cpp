//Operator Overloading
#include <iostream>
using namespace std;
class Complex
{
private:
    int real, imag;

public:
    Complex()
    {
        real = 0;
        imag = 0;
    }
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }
    Complex operator+(Complex const &obj)
    {
        Complex res;
        res.imag = imag + obj.imag;
        res.real = real + obj.real;
        return res;
    }
    void display()
    {
        cout<<real<<" + i "<<imag<<endl;
    }
};

int main()
{
    Complex a = Complex(10,20);
    Complex b = Complex(30,24);
    Complex c = a+b;
    c.display();

}