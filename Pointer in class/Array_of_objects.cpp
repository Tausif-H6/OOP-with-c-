#include <iostream>
using namespace std;

class Pharmacy
{
    int code;
    string name;

public:
    void setData(int c, string n)
    {
        code = c;
        name = n;
    }
    void Display()
    {
        cout << "Code of the medicine is  : " << code << endl;
        cout << "Name of the medicine is : " << name << endl;
    }
};

int main()
{
    int size_of_the_pharmacy = 3;
    Pharmacy *ptr = new Pharmacy[size_of_the_pharmacy];
    Pharmacy *tempPtr = ptr;
    int inputCode,i;
    string input_name;
    for (int i = 0; i < size_of_the_pharmacy; i++)
    {
         cout<<"Item number "<<i+1<<endl;
        cout << "Enter the code of medicine : " << endl;
        cin>>inputCode;
        cout << "Enter the name of the medicine : " << endl;
        cin>>input_name;
        ptr->setData(inputCode, input_name);
        ptr++;
    }

    for (int i = 0; i < size_of_the_pharmacy; i++)
    {
       cout<<"Item number : "<<i+1 <<endl;
       tempPtr->Display();
       tempPtr++;
    }
    
    return 0;
}