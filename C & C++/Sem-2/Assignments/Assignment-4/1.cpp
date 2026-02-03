#include <bits/stdc++.h>
using namespace std;

class Box
{
private:
    double length;
    double width;
    double height;
public:
    Box(int l, int w, int h): length(l), width(w), height(h) {};
    ~Box(){};
    friend double addVolume(Box b1, Box b2);
};

double addVolume(Box b1, Box b2)
{
    return (b1.length * b1.width * b1.height) + (b2.length * b2.width * b2.height);
}

int main() {
    Box box1(2, 3, 4);
    Box box2(5, 6, 7);

    double totalVolume = addVolume(box1, box2);
    cout << "Total Volume of Box1 and Box2: " << totalVolume << endl;
    
    cout << "Janmejai Pandey - 2501030199 - B4" << endl;
    return 0;
}