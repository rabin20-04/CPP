
// Write a simple program that converts the temperature in Celsius scale to Fahrenheit scale
//  and vice versa using the basic concept of class and object.
//   Make separate classes for Celsius and Fahrenheit which will have the private members
//    that hold the temperature value and make conversion functions in each class for conversion from one to another.
//     For example, you need to have a function toFahrenheit() in class Celsius that converts to Fahrenheit scale and returns the value.

#include <iostream>
using namespace std;

void clearScreen();

class Celsius
{
private:
    float temp;

public:
    Celsius(float t) : temp(t) {}
    float toFahrenheit()
    {
        // return converted = (temp * 1.8) + 32;
        return (temp * 1.8) + 32;
    }
};


class Fahrenheit
{
private:
    float temp;

public:
    Fahrenheit(float t) : temp(t) {}
    float toCelsius()
    {
        // return converted = (temp * 1.8) + 32;
        return ((temp - 32) * 10) / 18;
    }
};

int main()
{
    //     Celsius c1;
    //     Fahrenheit f1;

    cout << "Which temperature do you want to convert ? \n 1)Fahrenheit to Celsius \n2) Celsius to Fahrenheit  " << endl;
    float value;
    int choice;
    cin >> choice;

    if (choice == 1)
    {
        clearScreen();
        cout << "Enter the Fahrenheit value : " << endl;
        cin >> value;
        Fahrenheit f1(value);
        cout << "The Celsius value of " << value << " degree Fahrenheit is : " << f1.toCelsius() << " degree Celsius" << endl;

        // //to view if the result is correct
        // float apple = c1.toFahrenheit(value);
        // cout << "The Fahrenheit value of " << apple << " degree Celsius is : " << f1.toCelsius(apple) << " degree Fahrenheit" << endl;
    }
    else if (choice == 2)
    {
        clearScreen();
        cout << "Enter the Celsius value : " << endl;
        cin >> value;
        Celsius c1(value);
        cout << "The Fahrenheit value of " << value << " degree Celsius is : " << c1.toFahrenheit() << " degree Fahrenheit" << endl;
    }
    else
    {
        cout << "Invalid choice! \n Recheck before you enter ";
    }

    return 0;
}
void clearScreen()
{
    system("clear");
}