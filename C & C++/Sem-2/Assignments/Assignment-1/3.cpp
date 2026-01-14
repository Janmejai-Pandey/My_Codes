#include <bits/stdc++.h>
using namespace std;

struct Rectangle
{
    double length;
    double breath;
    double area;
    double perimeter;
}r1;


int main() {
    cout << "Enter length - ";
    cin >> r1.length;
    cout << "Enter breath - ";
    cin >> r1.breath;

    r1.area = r1.length * r1.breath;
    r1.perimeter = 2 * ( r1.length + r1.breath ); 

    cout << "Area = " << r1.area << endl;
    cout << "Perimeter = " << r1.perimeter << endl;

    return 0;
}