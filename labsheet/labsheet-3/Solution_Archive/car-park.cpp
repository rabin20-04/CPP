

// Create a class called carpark that has int data member for car id, int data member for charge/hour,
//  and float data member for the parked time. Make functions to set data members and show the charges and
//  parked hours of the corresponding car id.
//  Make functions for setting and showing the data members. Member function should be called from other functions.

#include <iostream>
using namespace std;

class CarPark
{
private:
    int car_id;
    int charge_per_hour;
    // int charge_per_hour=20;
    float parked_time;

public:
    CarPark()
    {
        ++car_id;
    }
    void set_data_member()
    {

        // cout << "Enter your car id : ";
        // cin >> car_id;
        // cout << car_id;

        cout << "Enter charge hours: ";
        cin >> charge_per_hour;
        cout << "Enter parked time: ";
        // create a class name apple
        cin >> parked_time;
    }

    void show_data()
    {
        cout << "Car ID: " << car_id << "\nCharge per hour is " << charge_per_hour << "\n Total parked time is : " << parked_time << endl;
        cout << "Total cost of your parking becomes : " << charge_per_hour * parked_time << endl;
    }
};



int main()
{
    CarPark car1, car2;
    car1.set_data_member();
    car1.show_data();
    car2.set_data_member();
    car2.show_data();

    return 0;
}
 