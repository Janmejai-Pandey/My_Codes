#include <iostream>
using namespace std;

class Test
{
public:
    static int x, y;

    static void sum()
    {
        Test::x = 10;
        Test::y = 20;
        cout << "Sum = " << x + y;
    }
    int main()
    {
        sum();
        return 0;
    }
};