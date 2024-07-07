#include <iostream>
using namespace std;


class Values
{
private:
    int num;
    string name;

public:
    Values()
    {
        num = 45;
        cout << "No argument: " << num << endl;
        ;
    }

    Values(int cpy) : num(cpy)
    {
        cout << "One  argument: " << num << endl;
    }
    Values(string get_name, int n) : name(get_name), num(n)
    {
        cout << "Two arguments : \n Hello " << name << " \nDay " << num << endl;
    }
};

int main()
{

    Values v1, v2(80), v3(" User", 20);
       

    return 0;
}