#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> first, second;
    int x;
    
    cout << "Enter elements for first array (negative to stop): ";
    while (true) {
        cin >> x;
        if (x < 0) break;
        first.push_back(x);
    }
    
    cout << "Enter elements for second array (negative to stop): ";
    while (true) {
        cin >> x;
        if (x < 0) break;
        second.push_back(x);
    }
    
    for (int element : second) {
        if (find(first.begin(), first.end(), element) == first.end()) {
            first.push_back(element);
        }
    }
    
    sort(first.begin(), first.end());
    
    cout << "First array after insertion and sorting: ";
    for (int elem : first) {
        cout << elem << " ";
    }
    cout << endl;
    cout << "Janmejai Pandey - 2501030199 - B4" << endl;
    
    return 0;
}