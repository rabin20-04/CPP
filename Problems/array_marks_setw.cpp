

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{

    string name;
    float marks[5];
    cout << "Enter name of student " << endl;
    cin >> name;
    cout << "Enter marks in five subjects : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the marks of " << " subject " << i + 1 << " : ";
        cin >> marks[i];
    }
    cout << "*********************************************************" << endl;
    cout << "Name : " << name << endl;
    cout << setw(5) << "S.N" << setw(8) << "Marks" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << setw(5) << i + 1 << setw(8) << marks[i] << endl;
    }
    int total = 0;
    for (int i = 0; i < 5; i++)
    {
        total += marks[i];
    }
    cout <<setw(15)<< "Total = " << total << endl;

    return 0;
}