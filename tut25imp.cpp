// Array of objects
#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId()
    {
        salary = 122;
        cout << "Enter the id of the employee" << endl;
        cin >> id;
    }
    void getId()
    {
        cout << "Id is : " << id << endl;
    }
};
int main()
{
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        // fb->setId();
        // fb->getId();
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}