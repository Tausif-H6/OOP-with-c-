#include<iostream>
using namespace std ; 

class Parentes{
    int num;
    public:
    void setData(int a){
      this->num=a;
    }
    void display(){
       cout<< 	"Herew  "<<num <<endl;
    }
};
int main () {
    Parentes p;
    p.setData(9);
    p.display();
    return 0;
}