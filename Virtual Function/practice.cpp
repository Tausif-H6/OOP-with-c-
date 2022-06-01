#include <iostream>
using namespace std;

class Computer
{
protected:
    int monitor;
    string procecor;

public:
    Computer();
    Computer(int m, string p)
    {
        monitor = m;
        procecor = p;
    }
    virtual void display()
    {
        cout << " There will be : " << monitor << "  Monitors" << endl;
        cout << "Along with the " << procecor << "  Procecor" << endl;
    }
};

class Keyboard : public Computer
{
protected:
    string keyBoardName = "Rapoo";

public:
    Keyboard();
    Keyboard(int m, string p, string kb) : Computer(m, p)
    {
        keyBoardName = kb;
    }
    void display()
    {
        cout << "KeyBoard is : " << keyBoardName << endl;
        cout << " There will be : " << monitor << "  Monitors" << endl;
        cout << "Along with the " << procecor << "  Procecor" << endl;
    }
};

class Mouse : public Computer
{
    string name;

public:
    Mouse(int m, string p, string mu):Computer(m,p)
    {
        name = mu;
    }
    void display()
    {
        cout << " Mouse name is  : " << name << endl;

        cout << " There will be : " << monitor << "  Monitors" << endl;
        cout << "Along with the " << procecor << "  Procecor" << endl;
    }
};

int main()
{
    int monitor = 2;
    string procecor = "Intel";
    string KeyboarD = "A4tech";
    string mouse = "Mice";

    Keyboard kd(monitor, procecor, KeyboarD);
    // kd.display();
    Mouse ms(monitor, procecor, mouse);
    //ms.display();
    Computer *cs[2];
    cs[0]=&kd;
    cs[1]=&ms;
   cs[0]->display();
   cs[1]->display();
    return 0;
}