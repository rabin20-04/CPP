#include <iostream>
using namespace std;
class complex
{
private:
    int real;
    int imag;

public:
    complex() {}
    void operator+(complex c1)
    {
        complex temp;
        temp.real = real + c1.real;
        temp.imag = imag + c1.imag;
        // return temp;
    }
    void display()
    {
        cout << real << "+" << imag << "*i = ";
    }
};

int main()
{

    cout << "Enter " << endl;

    return 0;
}