#include<iostream>
using namespace std ; 

class Home{
   string roadName;
   int ph;
   float price;
   public:
   Home(){}
   Home(string rN,int p,float pr){
       roadName=rN;
       ph=p;
       price=pr;
   }
    Home(string name){
        roadName=name;
        ph=056;
        price=0.00;
    }
   
   void display(){
      cout<< "Roadname is : "<<roadName<<" phone number is "<<ph<<" Price is  "<<price <<endl;
   }

};


int main () {
    Home h1,h2,h3;
    
    string n;
   int p;
   float pr;

  cout<<"Enter the Roasd Name , Phone number and price accordingly"<<endl;
  cin>>n>>p>>pr;
  h1=Home(n,p,pr);
  h1.display();


    return 0;
}