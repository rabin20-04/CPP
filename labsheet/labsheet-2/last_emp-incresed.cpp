
// Write a program that displays the current monthly salary of chief executive officer,
//  information officer, and system analyst, programmer that has been increased by 9, 10, 12, and 12 percentages respectively in year 2010.
//   Let us assume that the salaries in year 2009 are

// Chief executive officer Rs. 35000/m

// Information officer Rs. 25000/m

// System analyst Rs. 24000/m

// Programmer Rs. 18000/m

// Make a function that takes two arguments; one salary and the other increment. Use proper default argument.

#include <iostream>
using namespace std;

class office
{
public:
    string name;
    float salary, s_cheif = 35000, s_inf = 25000, sys_analyst = 24000, s_programmer = 18000;
    int position_selection;

    void get_data()
    {
        cout << " Enter your position \n 1) Chief officer \n 2) Information officer 3)System analyst 4)Programmer" << endl;
        cin >> position_selection;
        if (position_selection > 4 || position_selection < 1)
        {
            cout << "Invalid selection!" << endl;
        }
        else if (position_selection == 1)
        {

            cout << "The Monthly salary of cheif executive officer is : " << showdata(s_cheif, 9);
        } else if (position_selection == 1)
        {

            cout << "The Monthly salary of System officer is : " << showdata(s_inf, 9);
        } else if (position_selection == 1)
        {

            cout << "The Monthly salary of cheif executive officer is : " << showdata(s_cheif, 9);
        } else if (position_selection == 1)
        {

            cout << "The Monthly salary of cheif executive officer is : " << showdata(s_cheif, 9);
        }
    }


    int showdata(int salary, int increment)
    {
        return salary += salary * (increment / 100);
    }
};

int main()
{

    cout << "Enter " << endl;

    return 0;
}