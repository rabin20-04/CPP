#include <iostream>
#include <iomanip>
using namespace std;

class Office
{
public:
    float tax, rem;
    string name;
    float Emp_salary, salary;
    int position;
    void send_calculatedsalary(float);
    void clearScreen()
    {
        system("clear");
    }
    void getdata()

    {

        cout << "Enter your name " << endl;
        cin >> name;
        cout << "Enter your position \n 1) Employee \n 2) Exit" << endl;
        cin >> position;

        if (position < 1 || position > 2)
        {
            cout << "Invalid choice: \nPlease Try again! ";
        }
        else if (position == 1)
        {
            clearScreen();

            cout << "Enter you salary : ";
            cin >> Emp_salary;

            send_calculatedsalary(Emp_salary);

            cout << fixed << setprecision(2);
            cout << "Total salary you will receive after applying 10\% tax(" << tax << ") will be :$ " << rem << endl;
        }
        else
        {
            cout << "Sorry this is Employee portal" << endl;
        }
    }
};

inline void Office::send_calculatedsalary(float Emp_salary)
{
    tax = 0.1 * Emp_salary;
    rem = Emp_salary - tax;
}
int main()
{
    Office o1;
    o1.getdata();

    return 0;
}