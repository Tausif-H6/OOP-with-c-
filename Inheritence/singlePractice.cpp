#include <iostream>
using namespace std;

class Animal
{
    string name;
    int price;

public:
    int code = 5;
    void setData(string n, int p)
    {
        name = n;
        price = p;
    }

    void Display()
    {
        cout << "Name is " << name << " Price is : " << price << endl;
    }
};

class Cat : private Animal
{
    int getCode = code * 2;

public:
    void display()
    {
        setData("parsian", 5000);
             Display();
        cout << "Code of the Cat is  :" << getCode << endl;
    }
};

int main()
{

    Cat c;
    
    c.display();

    return 0;
}