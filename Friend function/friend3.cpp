#include<iostream>
using namespace std ; 

class B;
class A{
    string name;
    public:
    void setName(string n){
        name=n;
    }
    void display()
    {
       cout<< 	"The name is "<<name<<endl;
    }
    friend void swap (A& obj ,B& obj2 );
};

class B {
 string altrName;
  public:
  void detName(string m){
      altrName=m;
  }
  void display()
    {
       cout<< 	"The name is "<<altrName<<endl;
    }
    friend void swap (A &obj ,B &obj2 );
};

void swap (A & obj ,B & obj2 ){
    // A obj;
    // B obj2;
    string holder= obj.name;
    obj.name=obj2.altrName;
    obj2.altrName=holder;


//    cout<< "After swapping the names  A obj name "<<obj.name <<" B obj2 Name"<<obj2.altrName <<endl;
}





int main () {
    A a;
    a.setName("Tausif Hossain");
    a.display();
    B b ;
    b.detName("Sabah Matin");
    b.display();
    swap(a,b);
    a.display();
    b.display();
    return 0;
}