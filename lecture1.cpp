#include <iostream>
using namespace std;

// Rectangle class declaration
class Rectangle
{
private:
    double width;
    double length;

public:
    void setWidth(double);
    void setLength(double);
    double getWidth() const;
    double getLength() const;
    double getArea() const;
};

// setWidth assigns a value to the width member
void Rectangle::setWidth(double w)
{
    width = w;
}
void Rectangle::setLength(double l)
{
    length = l;
}
double Rectangle::getWidth() const
{
    return width;
}
double Rectangle::getLength() const
{
    return length;
}
double Rectangle::getArea() const
{
    return width * length;
}

int main()
{
    Rectangle Book, Door, Mobile;

    double tempWidth;
    double tempLengtth;
    int choice;
    cout << "Please choose one to know the Area" << endl;
    cout << " Press 1 Book " << endl;
    cout << " Press 2 Door" << endl;
    cout << " Press 3 Mobile" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Please insert the width for Book" << endl;
        cin >> tempWidth;
        cout << "Please insert the Length for Book" << endl;
        cin >> tempLengtth;
        Book.setWidth(tempWidth);
        Book.setLength(tempLengtth);
        cout << "Width of the Book is :" << Book.getWidth() << " Length of the Book is :" << Book.getLength() << "  Area is : " << Book.getArea() << endl;
        break;
    case 2:
        cout << "Please insert the width for Door" << endl;
        cin >> tempWidth;
        cout << "Please insert the Length for Door" << endl;
        cin >> tempLengtth;
        Door.setWidth(tempWidth);
        Door.setLength(tempLengtth);
        cout << "Width of the Door is :" << Door.getWidth() << " Length of the Door is :" << Door.getLength() << "  Area is : " << Door.getArea() << endl;
        break;
    case 3:
        cout << "Please insert the width for Mobile" << endl;
        cin >> tempWidth;
        cout << "Please insert the Length for Mobile" << endl;
        cin >> tempLengtth;
        Mobile.setWidth(tempWidth);
        Mobile.setLength(tempLengtth);
        cout << "Width of the Book is :" << Mobile.getWidth() << " Length of the Mobile is :" << Mobile.getLength() << "  Area is : " << Mobile.getArea();
    default:
        exit(0);
        break;
    }

    return 0;
}