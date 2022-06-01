#include<iostream>
using namespace std ; 
class Base{
    public:
    string name="Tausif";
    int valu=00;
/* By applying the virtual concept We can achive Runtime polymorphism  */

   virtual void Display ()// base class function virtual Now it is displaying the derived class function
   {
       cout<<"base class : "<<name<<" "<<valu<<endl;
    }
};

class Derived:public Base{
    public:
    string fname="Sabah Matin";
    double rr=2017;
    void Display(){
       cout<<"Derived  class : "<<fname<<" "<<rr<<endl;
    }
};


int main (){
      Base b;
      Base *bptr;
      Derived d;
      Derived drt;
      bptr=&d;//Base class pointer pointing derived class members but it can't access the derived class members.
      /* To break this default behavior we use virtual function  */
      bptr->Display();//After declare the base class function virtual Now it is displaying the derived class function.



    return 0;
}
