// Write a program to set a structure to hold a date (mm,dd and yy), assign values
//  to the members of the structure and print out the values in the format 11/28/2004 by function.
//  Pass the structure to the function

#include <iostream>
using namespace std;
struct date
{
    int month;
    int day;
    int year;
};

int main()
{

    date d1;
    cout << "Enter the year : " << endl;
    cin >> d1.year;
    do
    {
        cout << "Enter the month : " << endl;
        cin >> d1.month;
        if (d1.month < 0 || d1.month > 12)
            cout << " There are 12 months!\nEnter valid numnber" << endl;
    } while (d1.month < 0 || d1.month > 12);

    do
    {
        cout << "Enter the day : " << endl;

        cin >> d1.day;

        if (d1.day < 0 || d1.day > 12)
            cout << "There are maxium 32 days in a month!\nEnter valid number" << endl;
    } while (d1.day < 0 || d1.day > 32);

    cout << "Hey there \n The date you entered is : " << d1.day << "/" << d1.month << "/" << d1.year << endl;

    return 0;
}