#include <iostream>
using namespace std;

class Caller
{
public:
    Caller()
    {
        cout << "Hello there !" << endl;
        cout << "Here is the constructor" << endl;
    }
    ~Caller()
    {
        cout << "Hi there !" << endl;
        cout << "Here is the destructor" << endl;
    }
    //-------------destructor execotes within the {}
    //when the main ends in this case 
    // void Ccaller()
    // {
    //     cout << "Hi there !" << endl;
    //     cout << "Here after the destructor" << endl;
    // }
};

int main()
{
    Caller c1;
    // c1.Ccaller();

    return 0;
}