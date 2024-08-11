#include <iostream>
using namespace std;

void avgref(int &, int &);

int main()
{
    int aa = 2, bb = 7;
    avgref(aa, bb);
    cout << aa << endl
         << bb << endl;
    return 0;
}

void avgref(int &a, int &b)
{
    int temp = (a + b) / 2;
    if (a > b)
    {
        a = temp;
    }
    else
        b = temp;
}