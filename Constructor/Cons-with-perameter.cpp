#include<iostream>
#include <math.h>
using namespace std ; 

class complex {
     int a,b;
     double result;
      friend  complex calculateDistance(complex c1,complex c2);
     public:
     complex(int x, int y){
         a=x;
         b=y;
     }

     void Display (){
        cout<< 	"first number "<<a<<"i"<<" +"<<b <<endl;
     }



};

complex calculateDistance(complex c1,complex c2){
  
 complex r; 
 r.result= sqrt(pow( c2.a-c1.a,2)+pow(c2.b-c1.b,2));

     cout<< " Distance between two numbers " <<r.result <<endl;

     return r.result;
      

}



int main () {
    
    complex c(6,7);
    complex a(7,6);
    calculateDistance(c,a);
    
    return 0;
}