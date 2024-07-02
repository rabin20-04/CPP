// Write a function that passes two temperatures by reference and
//  sets the larger of the two numbers to a value entered by user by using return by reference.
// prompt user two  temp values
//  know the largest one then ask a new temp
// so in the place or address of largest number place the new number  and display the two variable
#include <iostream>
using namespace std;

int &tempbyref(int &temp1, int &temp2);

int main()
{
    int temp1, update, temp2;

    cout << "Enter two temperature :  " << endl;
    cout << "First: ";
    cin >> temp1;
    cout << "Second: ";
    cin >> temp2;

    int &largest = tempbyref(temp1, temp2);
    cout << "largest : " << largest << endl;

    cout << "Enter  temperature to update" << endl;
    cin >> update;

    largest = update;
    cout << "largest : " << largest << endl;

    cout << "temp1 : " << temp1 << endl;
    cout << "temp2 : " << temp2 << endl;

    return 0;
}

int &tempbyref(int &temp1, int &temp2)
{
    if (temp1 > temp2)
    {

        return temp1;
    }
    else
        return temp2;
}