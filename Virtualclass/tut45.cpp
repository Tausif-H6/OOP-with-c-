// Jokhon duita ek e class theke inherited class theke kono class e inherited hoi tokhon lage virtual class
#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void setNUmber(int a)
    {
        roll_number = a;
    }
    void printNumber()
    {
        cout << left << "Your roll is : " << roll_number << endl;
    }
};



class Test : virtual public Student
{
protected:
    float maths, phics;

public:
    void setMarks(float m1, float m2)
    {
        maths = m1;
        phics = m2;
       
    }
    void printMarks(){
         cout << "Your result is here : " << endl;
        cout << "Maths : " << maths << endl;
        cout << "Physics : " <<phics << endl;
    }
};



class Sports: virtual public Student {
    protected:
    float score;
    public:
    void setscore(float f){
        score=f;
    }
    void printScore(){
       cout<<"Score is :"<<score<<endl;
    }
};


class Result : public Test, public Sports{

   private:
   float total;
   public:
   void Finaldisplay(){
      total= maths+phics+score;
      printNumber();
      printScore();
      printMarks();
     cout<< "Your total score is "<<total<<endl;
   }

};





int main()
{
    Result r;
    r.setNUmber(2225);
    r.setMarks(90.6,88.5);
    r.setscore(90);
    r.Finaldisplay();


    return 0;
}