#include<iostream>
using namespace std ; 

class Base1{
    public:
    void Display(){
       cout<< "Print me Please !!!!!"<<endl;
    }
};

class Base2
{
private:
    /* data */
public:
    void Display(){
       cout<< "Amake print koro !!!!!"<<endl;
    }
};

class Derived :public Base1,public Base2{
    public:

};

int main () {
    Derived d;
    d.Base1::Display();
    d.Base2::Display();
    return 0;
}