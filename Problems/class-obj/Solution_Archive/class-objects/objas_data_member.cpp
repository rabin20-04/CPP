#include <iostream>
using namespace std;

class Ask
{
private:
    int num;

public:
    void ask_user()
    {
        cout << "Enter you phone number : " << endl;
        cin >> num;
    }
    void display()
    {
        cout << "Your phone number is : " << num << endl;
    }
};
class Get_ask
{
private:
    Ask a;
    int num;

public:
    void ask_user()
    {
        a.ask_user();
        cout << "Enter additional phone number : " << endl;

        cin >> num;
    }
    void display()
    {
        a.display();
        cout << "Your additional phone number is : " << num << endl;
    }
};

int main()
{

    Get_ask a1;
    a1.ask_user();
    a1.display();
    return 0;
}