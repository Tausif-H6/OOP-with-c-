#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void setRoll_number(int);
    void getRoll_number();
};

void Student::setRoll_number(int r)
{
    roll_number = r;
}

void Student::getRoll_number()
{
    cout << "The roll number is " << roll_number << endl;
}

class Exam : public Student
{

protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void getMarks(void);
};
void Exam::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void Exam::getMarks()
{
    cout << "Marks for the maths " << maths << endl;
    cout << "Marks for the physics" << physics << endl;
}


class Result: public Exam{
    float percentatge;
    public:
    void display(){
         getRoll_number();
         getMarks();
        cout<<"Your percenatage is : "<<(maths+physics)/2<<endl;

    }
};





int main()
{
   Result Tausif;
   Tausif.setRoll_number(4023);
   Tausif.set_marks(98.0,98.9);
   Tausif.display();

    return 0;
}