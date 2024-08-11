#include <iostream>
using namespace std;

class callin
{
private:
    int num;

public:
    callin(int apple) : num(apple)
    {
        cout << "Apples value from constructor :" << apple<<endl;
    }
    ~callin()
    {
        cout << "HEllo from destructor:";
    }
};

int main()
{

    callin c(20);

    return 0;
}