#include <iostream>
using namespace std;
/* From two class we will make one class  */
class A
{
protected:
    int roll;

public:
    void setBase(int a)
    {
        roll = a;
    }
};

class B
{
protected:
    string name;

public:
    void setName(string n)
    {
        name = n;
    }
};

class AB : public A, public B   // Drived class 
{

public:
   

    void show()
    {
       
      cout<<"Roll is "<<roll<<"Name i s :"<<name<<endl;
    }
};

int main()
{
    
    AB ab1;
    ab1.setBase(1562);
    ab1.setName("Tausif Hossain");
    ab1.show();
    return 0;
}