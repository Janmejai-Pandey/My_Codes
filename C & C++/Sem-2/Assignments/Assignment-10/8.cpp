#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, int> m;
    
    m[1] = 2;
    m[3] = 4;
    m[4] = 5;
    
    m.insert({5, 6});
    
    m.insert_or_assign(3, 10);
    
    cout << "Elements in the map m:" << endl;
    for (auto it : m) {
        cout << "Key: " << it.first << ", Value: " << it.second << endl;
    }
    
    cout << "Janmejai Pandey - 2501030199 - B4" << endl;
    
    return 0;
}