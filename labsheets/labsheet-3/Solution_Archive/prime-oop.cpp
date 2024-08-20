// Assume that you want to check whether the number is prime or not.
// Write a program that asks for numbers repeatedly.
// When it finishes checking a number the program asks if the user wants to do another calculation.
// The response can be 'y' or 'n'. Don't forget to use the object-oriented concept.

#include <iostream>
#include <cmath>
using namespace std;

class Prime
{
private:
    int num;

public:
    Prime(int n) : num(n){};
    void show()

    {
        if (num < 1)
        {
            cout << "Invalid !\nEnter a positive number" << endl;
            return;
        }
        bool isPrime = true;
        for (int i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            cout << num << " is a prime number." << endl;
        }
        else
        {
            cout << num << " not a Prime number! " << endl;
        }
    }
};

int main()
{
    int num;
    char choice;

    do
    {
        cout << "Check whether a number is prime or not !\n Enter any number : ";
        cin >> num;

        Prime p1(num);
        p1.show();
        cout << "Do you want to enter more ?\n Enter 'y' or 'n' : ";
        cin >> choice;
    } while (choice == 'y');

    return 0;
}