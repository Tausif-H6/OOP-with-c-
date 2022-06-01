#include <iostream>
using namespace std;

int main()
{

    string a = "Tausif ";
    string *p = &a;

    cout << p << endl;

    cout << *(p) << endl;

    // Using new keyword

    double *ball = new double(633.9);
    cout << *(ball) << endl;

    // How to declare point array 
    //It is also called dynamically allocated memmory
    string *arr= new string[3];
    arr[0]="Tausif";
    arr[1]="Rakib";
    arr[2]="Ayaz";
    //How to delete arry

    delete[] arr;
   cout<< 	arr[2] <<endl;
    for (int i = 0; i < 3; i++)
    {
       cout<<"Names are : "<<arr[i] <<endl;
    }

    return 0;
}