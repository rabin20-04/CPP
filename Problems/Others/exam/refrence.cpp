#include <iostream>
using namespace std;

void avgref(int &, int &);
void justswap(int &, int &);

int main()
{
    int aa = 2, bb = 7;
    int cc = 2, dd = 7;
    cout << "Before" << aa << endl
         << bb << endl;
    avgref(aa, bb);
    cout << "After" << aa << endl
         << bb << endl;

    cout << "Befre swap" << cc << endl
         << dd << endl;
    justswap(cc, dd);

    cout << "After swap" << cc << endl
         << dd << endl;
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
void justswap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}