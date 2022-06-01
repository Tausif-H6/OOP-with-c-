#include<iostream>
using namespace std ; 

class Football{
 int num;

 public: 
 Football(){
     num =2025;
 }
 void print(){
    cout<< 	"Number is "<<num <<endl;
 }


};



int main () {
  Football f;
  f.print();  
    return 0;
}

/* Characteristics of Constructors
1. It should be declared in the public section of the class
2. They are automatically invoked whenever the object is created
3. They cannot return values and do not have return types
4. It can havê default arguments
5. We cannot refer to their address */