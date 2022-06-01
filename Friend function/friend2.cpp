#include<iostream>
using namespace std ; 
#include<iostream>

class y;
class x{
    string name;
    public:
    void setname(string n)
    {
        name=n;
    }
    friend void add (x obj1, y obj2);
};

class y
{
private:
  int roll;
public:
  void setRoll(int r){
     roll=r;
  }
  friend void add (x obj1, y obj2);
    
};

void add (x obj1, y obj2){
   cout<< 	"Here you will se name and roll number"<< " Name  "<<obj1.name <<"+ Roll  "<<obj2.roll <<endl;
}





int main () {
    x o1;
    o1.setname("Sabah Matin");
    y o2;
    o2.setRoll(2025);
    add(o1,o2);    
    return 0;
}
