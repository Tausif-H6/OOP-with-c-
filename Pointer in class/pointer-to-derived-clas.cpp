#include<iostream>
using namespace std ; 
class MAn{
    public:
    string name="Tausif";
    int valu=00;

    void Display (){
       cout<<"base class : "<<name<<" "<<valu<<endl;
    }
};

class Child:public MAn{
    public:
    string fname;
    double rr;
    void Display(){
       cout<<"Derived  class : "<<fname<<" "<<rr<<endl;
    }
};



int main () {
    MAn *prt;
    Child *prt2;
    Child c;
    MAn m;
    //prt=&c;//Pointing a derived class object but acn't set or use anything of derived class
    //prt->Display();
    //prt->Display2();
   // prt2=&m;
   prt2=&c;
   prt2->name="Tausif ";
   prt2->fname="JKIR";
   prt2->Display();


    

    return 0;
}