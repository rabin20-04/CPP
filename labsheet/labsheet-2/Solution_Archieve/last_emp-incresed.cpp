
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
    float salary, s_chief = 35000, information_inf = 25000, sys_analyst = 24000, s_programmer = 18000;
    int position_selection;

    void get_data()

    {
        cout << " Enter your position \n 1) Chief officer \n 2) Information officer \n 3)System analyst \n 4)Programmer" << endl;
        cin >> position_selection;

        if (position_selection > 4 || position_selection < 1)
        {
            cout << "Invalid selection!" << endl;
        }

        else if (position_selection == 1)
        {

            cout << "The Monthly salary of chief executive officer is : " << showdata(s_chief, 9) << endl;
        }

        else if (position_selection == 2)
        {

            cout << "The Monthly salary of Information officer is : " << showdata(information_inf, 10) << endl;
        }

        else if (position_selection == 3)
        {

            cout << "The Monthly salary of System Analyst is : " << showdata(sys_analyst, 11) << endl;
        }

        else if (position_selection == 4)
        {

            cout << "The Monthly salary of Programmer is : " << showdata(s_programmer, 12) << endl;
        }
    }

    int showdata(float salary, float increment)
    {
        return salary + salary * (increment / 100);
    }
};

int main()
{

    office o1;
    o1.get_data();
    return 0;
}