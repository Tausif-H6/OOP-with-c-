#include<iostream>
using namespace std ; 

class Complex
{
private:
    /* data */
    int a,b;
   friend  Complex sumComplex(Complex o1,Complex o2);
public:
    void setNumber(int n,int m){
        a=n;
        b=m;
    }


   //Friend function will allowed to access the private variables of this class 

    void printNumber (){
       cout<<"Your number is "<<a<< "+"<<b<<"i" <<endl;
    }
};


Complex sumComplex(Complex o1,Complex o2){
    Complex o3;
    //Trying to access the private data of Complex class
    o3.setNumber((o1.a + o2.a),(o1.b+
    o2.b));
    return o3;
}




int main () {
    Complex n,m, sum;
    n.setNumber(1,5);
    n.printNumber();

    m.setNumber(1,5);
    m.printNumber();

    sum=sumComplex(n,m);
    sum.printNumber();
    return 0;
}
/*
                Properties of a firend function 

1.  Not in the sope in the class
2. It can't be called by the object of the main function.like  n.sumComplex() = Invalid 
3. Can be invoked wihtout the help of the object 
4.Usuallu contains objects as arguments.
5. Can be declared inside public functions or private sections of a class.
6. 
*/