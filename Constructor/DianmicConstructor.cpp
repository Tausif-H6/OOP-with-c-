#include<iostream>
using namespace std ; 

class Bank {
   int principal;
   int years;
   float insterestRate;
   float returnValue;
   public:
   Bank(){}
   Bank(int p,int y,float r);
    Bank(int p,int y,int r);

    void show();
};

  
Bank::Bank(int p,int y,float r){
    principal=p;
    years=y;
    insterestRate=r;
    returnValue=principal;
     for (int i = 0; i < y; i++)
     {
        returnValue= returnValue*(1+insterestRate); 
     }
     
    
}

Bank::Bank(int p,int y,int r){
    principal=p;
    years=y;
    insterestRate=float(r)/100;
    returnValue=principal;
     for (int i = 0; i < y; i++)
     {
        returnValue= returnValue*(1+insterestRate); 
     }
     
    
}

void Bank::show (){
    cout<<endl<<"Principal amount was "<<principal <<endl
<<".Return value after "<<years<<" is "<<returnValue<<endl ;
}






int main () {
    Bank b1,b2,b3;
     int p,y,R;
     float r;
     
      
     cout<<"Enter the value of p ,y and r  " <<endl;
     cin>>p>>y>>r;
     b1=Bank(p,y,r);
     b1.show();


    //   cout<<"Enter the value of p ,y and R " <<endl;
    //  cin>>p>>y>>R;
    //  b2=Bank(p,y,R);
    //  b2.show();





    return 0;
}