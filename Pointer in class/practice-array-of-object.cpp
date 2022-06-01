#include <iostream>
using namespace std;

class Vaichle
{
    int wheelCount;

public:
    void setData(int a)
    {
        wheelCount = a;
    }
    void Detect_Veichle()
    {
        switch (wheelCount)
        {
        case 2:
            cout << "It is a bike" << endl;
            /* code */
            break;
        case 3:
            cout << "It is a CNG" << endl;
            break;
        case 4:
            cout << "It is a Car " << endl;
        default:
            break;
        }
    }
};

class Owner : public Vaichle
{
    string name;
    int mobile;

public:
    void setOwnerInfo(string a, int n)
    {
        name = a;
        mobile = n;
    }
    void DisplayOwnerinfo()
    {
        cout << "Name is : " << name << endl;
        cout << "Mobile number is : " << mobile << endl;
    }
};

int main()
{
    string owName;
    int owNumber;
    int wheel_count;
    int count = 3;
    Owner *ptr = new Owner[count];

    for (int i = 0; i < count; i++)
    {
        cout << "Enter Owner name : " << endl;
        cin >> owName;
        cout << "Enter Owner Phone Number  : " << owNumber << endl;
        cin >> owNumber;
        cout << "Please enter how many wheels your machine have " << endl;
        cin >> wheel_count;
        ptr->setOwnerInfo(owName, owNumber);
        ptr->DisplayOwnerinfo();
        ptr->setData(wheel_count);
        ptr->Detect_Veichle();
        ptr++;
    }

    return 0;
}