#include<iostream>
using namespace std ; 

class Bus{
public:
string  name;
int number;
public:
void setNUmberandName(string n, int num){
name=n;
number=num;

}
void getDetails()
{
   cout<<"Name of the bus is "<<name<<endl;
  cout<< 	"Number of the bus is "<<number <<endl;
}

};



int main () {
    Bus b;
    Bus *ptr = new Bus;
    int *ptrNum= new int [6];
    (*ptrNum)=6;
    *(ptrNum+1)=66;
    *(ptrNum+2)=99;
    for (int i = 0; i < 4; i++)
    {
       cout<< 	"Values are : "<<ptrNum[i] <<endl;
    }
    
    // ptr->setNUmberandName("Volvo",5026);
    // ptr->getDetails();
     (*ptr).setNUmberandName("Hanif",5066);
     ptr->getDetails();//Etar mane holo ei pointer k derence kore ere object er function aeccess koprte daw
     (*ptr).getDetails();
     ptr->name="Arshad";
     ptr->getDetails();
    return 0;
}