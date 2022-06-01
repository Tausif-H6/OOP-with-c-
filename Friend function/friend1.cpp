#include <iostream>
#include <string>
using namespace std;

class Tausif
{
private:
    /* data */
    string name;
    int amount;
    string addres;
    friend Tausif Bank_details(Tausif o1, Tausif o2);

public:
    void setName(string n)
    {
        name = n;
    }
    void setAmount(int a)
    {
        amount = a;
    }
    void setAdress(string a)
    {
        addres = a;
    }
    void display()
    {
        cout << "Name of this class"
             << " " << name << endl;
        cout << "Taka pabe"
             << " " << amount << endl;
        cout << "Thikana hobe "
             << " " << addres << endl;
    }
};

Tausif Bank_details(Tausif o1, Tausif o2)
{

    Tausif o3;

    cout << "Enter tausif's Father name " << endl;
    cin >> o1.name;
    if (o1.name == "Jahangir")
    {
        cout << "It is Tausif's Father " << endl;
        o3.name = o1.name;
        cout << "Enter the amount " << endl;
        cin >> o1.amount;
        o3.amount = o1.amount;
        cout << "Enter the adress " << endl;
        cin >> o1.addres;
        o3.addres = o1.addres;
    }
    else
    {
        cout << "Try again" << endl;
    }

    return o3;
}

int main()
{

    Tausif t, j;
    t.setName("Sabah Matin");
    t.setAmount(2000);
    t.setAdress("Lalbag Dhaka");
    t.display();

    t = Bank_details(t, j);
    t.display();

    return 0;
}
