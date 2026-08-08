#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> my_map;
    
    my_map["Cow"] = 1;
    my_map["Cat"] = 2;
    my_map["Lion"] = 3;
    
    auto it = my_map.find("Cat");
    if (it != my_map.end()) {
        my_map.erase(it);
    }
    
    cout << "Elements in the map my_map:" << endl;
    for (auto it : my_map) {
        cout << "Key: " << it.first << ", Value: " << it.second << endl;
    }
    
    cout << "Janmejai Pandey - 2501030199 - B4" << endl;
    
    return 0;
}