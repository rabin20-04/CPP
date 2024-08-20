#include <iostream>
using namespace std;

class CarPark
{
private:
    int car_id;
    int charge_per_hour;
    float parked_time;
    static int id_counter;

public:
    CarPark()
    {
        car_id = ++id_counter;
    }

    void set_data_member()
    {
        cout << "Enter charge per hour: ";
        cin >> charge_per_hour;
        cout << "Enter parked time: ";
        cin >> parked_time;
    }

    void show_data() const
    {
        cout << "Car ID: " << car_id << "\nCharge per hour: " << charge_per_hour << "\nTotal parked time: " << parked_time << endl;
        cout << "Total cost of your parking: " << charge_per_hour * parked_time << endl;
    }
};

int CarPark::id_counter = 0;

int main()
{
    CarPark car1, car2;
    car1.set_data_member();
    car1.show_data();
    car2.set_data_member();
    car2.show_data();

    return 0;
}
