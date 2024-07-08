#include <iostream>
using namespace std;

class Test
{
private:
    int num1, num2;

public:
    // Test(int x, int y) : num1(x), num2(y) {}
    Test(int x, int y) : num1(x), num2(x+y) {}

    void display()
    {
        cout << "num1 = " << num1 << "\n num2 = " << num2 << endl;
    }
};

int main()
{
    Test t1(20, 30);

    cout << "Enter " << endl;
    t1.display();

    return 0;
}