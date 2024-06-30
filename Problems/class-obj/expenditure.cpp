#include <iostream>
#include <string>
#include <vector>

using namespace std;

class expenditure
{

public:
    vector<float> monthly_expenditure;
    float average;

    void get_data()
    {
        int year_num;
        int month_num;
        string ask;
        cout << "Enter the year : " << endl;
        cin >> year_num;

        cout << "Enter total number of months you want to add : " << endl;
        cin >> month_num;
        for (int i = 1; i <= month_num; i++)
        {

            cout << "Enter the expendture of month " << i << ": " << endl;
            cin >> monthly_expenditure[i];
        }
    }
    // Loop through each expenditure in the monthly_expenditure vector
    // for (float expenditure : monthly_expenditure)
    //     total_monthly_average += expenditure;
    // Add each expenditure to the total
    void average_monthly()
    {
        float total_monthly_average = 0;
        for (float expenditure : monthly_expenditure)
        {
            average += expenditure;
            if (!monthly_expenditure.empty())
            {
                total_monthly_average = average / monthly_expenditure.size();
                cout << "Total monthly expenditure is : " << total_monthly_average;
                        }
            else
            {
                total_monthly_average = 0;
            }
        }
    }
};
int main()
{
    int year;
    expenditure e1;
    e1.get_data();
    e1.average_monthly();

    cout << "View the expenditure of year : " << endl;
    cin >> year;

    return 0;
}