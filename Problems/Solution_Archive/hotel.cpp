#include <iostream>
using namespace std;

class solti
{
private:
    int a;
    string name;
    int coord;

public:
    // solti(string names="solti",int coord)
    // {
    //     // this->name = names;
    //     name = names;
    // this->coord=coord
    // };

    solti(string names = "solti", int cood = 900) : name(names), coord(cood){};

    void choosemenu()
    {
        cout << "Welcome to " << name << " ," << coord << endl;
        cout << "Choose items:\n 1)Pizza \n 2)Thukpa \n 3)Mo:Mo \n 4)Chowmin \n 5)Sandwich " << endl;

        cin >> a;
        if (a == 1)
        {
            cout << "Congrats you have sucessfully order : " << "Pizza" << endl;
        }
        else if (a == 2)
        {
            cout << "Congrats you have sucessfully order : " << "Thukpa" << endl;
        }
        else if (a == 3)
        {
            cout << "Congrats you have sucessfully order : " << "Mo:Mo" << endl;
        }
        else if (a == 4)
        {
            cout << "Congrats you have sucessfully order : " << "Chowmin" << endl;
        }
        else if (a == 5)
        {
            cout << "Congrats you have sucessfully order : " << "Sandwich" << endl;
        }
    }
};
void greeting_hotel(solti &soltaobj);

int main()
{
    solti soltina("soltina", 500), solta("solta", 600), hanuman;
    int a;
    cout << "Greetings from Solti hotel \n 1) Solta hotel Maitighar \n 2) Soltina Balkot  " << endl;
    cin >> a;

    if (a == 1)
    {
        // solta.choosemenu();

        greeting_hotel(solta);
    }

    else if (a == 2)
    {
        greeting_hotel(soltina);

        // soltina.choosemenu();
    }
    else
    {
        greeting_hotel(hanuman);
    }

    // greeting_hotel();

    return 0;
}

void greeting_hotel(solti &soltaobj)
{
    soltaobj.choosemenu();
}