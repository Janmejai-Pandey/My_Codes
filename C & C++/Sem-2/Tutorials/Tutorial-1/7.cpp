#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter a, b and c where ax^2 + bx + c = 0 : ";
    float a, b, c;
    cin >> a >> b >> c;

    float D = b * b - 4 * a * c;
    cout << "Roots are : ";
    if (D < 0)
    {
        float r = -b / (2 * a);
        float i = sqrt(-D) / (2 * a);
        cout << r << " + " << i << "i";
        cout << " , ";
        cout << r << " - " << i << "i";
    }
    else
    {
        float x1 = (-b + sqrt(D)) / (2 * a);
        float x2 = (-b - sqrt(D)) / (2 * a);
        cout << x1 << " , " << x2;
    }

    return 0;
}