#include <iostream>
using namespace std;

class base
{
public:
    virtual void show()
    {
        cout << "Hello from base class" << endl;
    }
};
class drived : public base
{
public:
    void show() override
    {
        cout << "Hello from derived class " << endl;
    }
};

int main()
{
    base *b;
    drived d;
    b = &d;
    b->show(); // in place of b.show();    and ---// Calls derived class show() due to runtime polymorphism

    // ------------------------------------------if used simply b.show and d.show it is static polymorphism
    // key point for runtime there are others also but easy is use
    // base as pointer
    // take address of derived in the pointer
    // call function using ->
    // dont forget to use virtual ,,, override ,,,here override word is optional

    return 0;
}