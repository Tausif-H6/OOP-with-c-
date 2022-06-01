#include<iostream>
using namespace std ; 
class Employee
{
private:
    int num1;
    string name;

public:
    int date;
    void getdata();
    void setData(int a, string n);
    string takeNames ();  
    string arr[4];
};


string Employee::takeNames (){
     
   for (int i = 0; i < 5; i++)
   {
  cout<< 	"Enter names" <<endl;
   cin>>arr[i];
       
   }
   
   return arr[4];
 
}
void Employee::setData(int a, string n){
 num1=a;
  name=n;

}
void Employee::getdata(){
  cout<< 	"The name is :"<<name <<endl;
  cout<< 	"Phone number is "<<num1 <<endl;
  cout<< 	"Date is :"<<date <<endl;

 cout<< 	"Later added employees are .........." <<endl;
  takeNames();
 for (int i = 0; i < 5; i++)
 {
    cout<< 	"Names are "<<arr[i] <<endl;
 }
 
}


int main () {
    Employee e;
     e.date=22;
    
    e.setData(54,"Tausif Hossain");
    e.getdata();


    return 0;
}