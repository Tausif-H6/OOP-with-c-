#include<iostream>
using namespace std ; 


int sum ( int &a, int &b){
    int sum=a+b ;
   cout<<"Sum is :"<<sum<<endl;
}


int main () {
     int j=5,k=6;
     sum(j,k);
    return 0;
}