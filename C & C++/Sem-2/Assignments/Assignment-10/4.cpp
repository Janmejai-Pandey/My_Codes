#include <bits/stdc++.h>
using namespace std;

template <typename T>

T minimum(T a, T b) {
    return (a < b) ? a : b;
}

template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int a = 5, b = 10;
    cout << "Minimum of " << a << " and " << b << " is: " << minimum(a, b) << endl;
    cout << "Maximum of " << a << " and " << b << " is: " << maximum(a, b) << endl;

    char g = 'a', h = 'z';
    cout << "Minimum of '" << g << "' and '" << h << "' is: '" << minimum(g, h) << "'" << endl;
    cout << "Maximum of '" << g << "' and '" << h << "' is: '" << maximum(g, h) << "'" << endl;
    

    string s1 = "apple", s2 = "banana";
    cout << "Minimum of \"" << s1 << "\" and \"" << s2 << "\" is: \"" << minimum(s1, s2) << "\"" << endl;
    cout << "Maximum of \"" << s1 << "\" and \"" << s2 << "\" is: \"" << maximum(s1, s2) << "\"" << endl;
    
    return 0;
}