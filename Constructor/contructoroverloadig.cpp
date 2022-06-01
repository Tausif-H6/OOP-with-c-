#include<iostream>
using namespace std ; 
class car
{
private:
  string name;
  int model;
public:
    car(){
        
        name="No car selected";
        model= 0;
     
    }
    car(string a){
        name=a;
    }
    car(string n,int m){
        name=n;
        model=m;
    }

    void Display(){
       cout<< 	"Car name  :" <<name <<"  Model :" <<model<<endl;
    }
};


int main () {
   car c;
   c.Display();

   car mazda("MAZDA");
   mazda.Display();

   car proton ("Saga",5053);
   proton.Display();


    return 0;
}