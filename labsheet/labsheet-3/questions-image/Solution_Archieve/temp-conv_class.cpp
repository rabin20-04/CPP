
// Write a simple program that converts the temperature in Celsius scale to Farenheit scale
//  and vice versa using the basic concept of class and object.
//   Make separate classes for Celsius and Farenheit which will have the private members
//    that hold the temperature value and make conversion functions in each class for conversion from one to another.
//     For example, you need to have a function toFarenheit() in class Celsius that converts to Farenheit scale and returns the value.

#include <iostream>
using namespace std;

class Celsius
{
private:
    float temp;
    float converted;

public:
    float toFarenheit(float temp)
    {
        // return converted = (temp * 1.8) + 32;
        return (temp * 1.8) + 32;
    }
};
class Farenheit
{
private:
    float temp;
    float converted;

public:
    float toCelsius(float temp)
    {
        // return converted = (temp * 1.8) + 32;
        return ((temp - 32) * 10) / 18;
    }
};

int main()
{
    Celsius c1;
    Farenheit f1;

    cout << "Which temperature do you want to convert ? \n 1)Farenheit to Celsius \n2) Celsius to Farenheit  " << endl;
    float choice, value;
    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter the Farenheit value : " << endl;
        cin >> value;
        cout << "The Celsius value of " << value << " degree Farenheit is : " << c1.toFarenheit(value) << " degree Celsius" << endl;
        float apple = c1.toFarenheit(value);
        cout << "The Farenheit value of " << apple << " degree Celsius is : " << f1.toCelsius(apple) << " degree Farenheit" << endl;
    }
    else if (choice == 2)
    {
        cout << "Enter the Celsius value : " << endl;
        cin >> value;
        cout << "The Farenheit value of " << value << " degree Celsius is : " << f1.toCelsius(value) << " degree Farenheit" << endl;
    }
    else
    {
        cout << "Invalid choice! \n Recheck before you enter ";
    }

    return 0;
}