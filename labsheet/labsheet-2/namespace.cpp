// Define two namespaces: Square and Cube. In both the namespaces,
// define an integer variable named "num" and a function named "fun".
//  The "fun" function in "Square" namespace, should return the square
//   of an integer passed as an argument while the "fun" function in "Cube"
//   namespace, should return the cube of an integer passed as an argument.
//   In the main function, set the integer variables "num" of both the namespaces with different values.
//    Then, compute and print the cube of the integer variable "num" of the "Square" namespace using the "fun" function
//    of the "Cube" namespace and the square of the integer variable "num" of the "Cube"
// namespace using the "fun" function of the "Square" namespace.

#include <iostream>
using namespace std;
namespace Square
{
    int num;
    void fun(int num)
    {
        cout << "Square = " << num * num << endl;
    }

};
namespace Cube
{
    int num;
    void fun(int num)
    {
        cout << "Cube = " << num * num * num << endl;
    }
}

int main()
{

    cout << "Enter " << endl;
    Square::num = 3;
    Cube::num = 5;

    return 0;
}