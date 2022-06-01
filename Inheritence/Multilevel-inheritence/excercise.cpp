#include <iostream>
using namespace std;

class SimpleCalculator
{

    double a, b;

public:
    double addition(double num, double num2)
    {
        return num + num2;
    }
    double subtraction(double num, double num2)
    {
        return num - num2;
    }
    double multiplication(double num, double num2)
    {
        return num * num2;
    }
    double division(double num, double num2)
    {
        return num / num2;
    }
};
class ScientificCalculator
{
    double store1, store2;

public:
    double Operation(double num, double num2)
    {
        store1 = num;
        store2 = num2;
        double avg = num + num2 / 2;
        return avg;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{

public:
    void Display(double x, double y)
    {
        cout << "Additon of the number is " << addition(x, y) << "Subtraction is " << subtraction(x, y) << "Multiplication is " << multiplication(x, y) << " Divison is  " << division(x, y) << "Average is : " << Operation(x, y) << endl;
    }
};

int main()
{
    double a1, a2;
    HybridCalculator h;
    cout << "Enter first number " << endl;
    cin >> a1;
    cout << "Enter number for two" << endl;
    cin >> a2;

    h.Display(a1, a2);
    return 0;
}