
#include <bits/stdc++.h>
using namespace std;

class Rect
{
    double l;
    double h;
public:
    Rect(double ll, double hh)
    {
        l = ll;
        h = hh;
    }

    double area()
    {
        return l * h;
    }
};

class Circle
{
    double r;
public:
    Circle(double rr)
    {
        r = rr;
    }

    double area()
    {
        return M_PI * r * r;
    }
};

int main()
{
    double length, height, radius;

    cout << "Enter length and height of rectangle: ";
    cin >> length >> height;
    Rect rectangle(length, height);
    cout << "Area of Rectangle: " << rectangle.area() << endl;

    cout << "Enter radius of circle: ";
    cin >> radius;
    Circle circle(radius);
    cout << "Area of Circle: " << circle.area() << endl;

    cout << "Janmejai Pandey - 2501030199 - B4" << endl;
    return 0;
}