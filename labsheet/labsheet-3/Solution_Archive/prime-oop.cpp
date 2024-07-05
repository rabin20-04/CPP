// Assume that you want to check whether the number is prime or not.
// Write a program that asks for numbers repeatedly.
// When it finishes checking a number the program asks if the user wants to do another calculation.
// The response can be 'y' or 'n'. Don't forget to use the object-oriented concept.

#include <iostream>
using namespace std;

class Prime
{
private:
    int num;

public:
    void show(int num)
    {
        for (int i=2;i<=num/2;i++)
        {
            

        }
    }
};

int main()
{
    Prime p1;
    int num;
    char choice;
    do
    {
        cout << "Enter any number to check whether it is Prime or not : " << endl;
        cin >> num;
p1.show(num);
        cout << "Do you want to enter more ?\n Enter 'y' or 'n' : ";
        cin >> choice;
    } while (choice == 'y');

    return 0;
}