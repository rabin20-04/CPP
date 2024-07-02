// Write a program using the function overloading that converts feet to inches.
// Use function with no argument,
// one argument and two arguments.
//  Decide yourself the types of arguments.
//  Use pass by reference in any one of the function above.

#include <iostream>
using namespace std;
void noarg();
void witharg(int);
void witharg(int, int &inch);
void passbyreference(int &feet);

int main()
{
    int feet, inch;
    cout << "Enter the length in feet: " << endl;
    cin >> feet;
    noarg();
    witharg(feet);
    witharg(feet, inch);
    passbyreference(feet);
    return 0;
}
void noarg()
{
    cout << " For the function no argument : \nEnter the length in feet" << endl;
    int feet;
    cin >> feet;
    cout << " No argument\nThe length you entered " << feet << "feet in Inch equals : " << feet * 12 << endl;
}
void witharg(int feet)
{

    cout << "Single argument \nThe length you entered " << feet << "feet in Inch equals : " << feet * 12 << endl;
}
void witharg(int feet, int &inch)
{
    inch = feet * 12;

    cout << "Double argument \nThe length you entered " << feet << "feet in Inch equals : " << inch << endl;
}
void passbyreference(int &feet)
{
    cout << "Pass by reference  \nThe length you entered " << feet << "feet in Inch equals : " << feet * 12 << endl;
}