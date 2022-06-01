#include<iostream>
using namespace std ; 

class Employee {
int id ;
static int count;

public: 
void setData();
void getData();
static void getCount();
};

void Employee ::setData(){
cout<< "Enter the id " <<endl;
cin>>id;
count++;
}

void Employee ::getData(){
   cout<< 	"The id of the employee is"<<id<<"And employee number "<<count <<endl;
}

//Static variable k shob object e access korte pare.
int Employee::count;//Default value is 0

 void Employee::getCount(){
   cout<< "The value of the count is "<<count<<endl;
}

int main () {
    //Static Data members
    Employee e,r,t;
    e.setData();
    e.getData();
    Employee::getCount();
    r.setData();
    r.getData();
     Employee::getCount();
    t.setData();
    t.getData();
     Employee::getCount();
    return 0;
}