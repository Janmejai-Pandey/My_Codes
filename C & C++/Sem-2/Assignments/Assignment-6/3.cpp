#include <bits/stdc++.h>
using namespace std;

class ThroneInheritance {
    string kingName;
    map<string, vector<string>> family;
    vector<string> deceased;

public:
    ThroneInheritance(string king) {
        kingName = king;
    }

    void birth(string parentName, string childName) {
        family[parentName].push_back(childName);
    }

//      Mark a Person as Dead: death(name) 
//  Marks the person as dead. 
//  The person should not be removed from records, only skipped in the final 
// inheritance order. 
    void death(string name) {
        deceased.push_back(name);
    }

    vector<string> getInheritanceOrder() {
        vector<string> order;
        dfs(kingName, order);
        return order;
    }

int main() { 
    // Step 1: Initialize kingdom 
    ThroneInheritance kingdom("King"); 
    // Step 2: Add family members 
    kingdom.birth("King", "Charles"); 
    kingdom.birth("King", "Anne"); 
    kingdom.birth("Charles", "William"); 
    kingdom.birth("William", "George"); 
 
    // Step 3: Display inheritance order 
    cout << "Current Inheritance Order:\n"; 
    vector<string> order1 = kingdom.getInheritanceOrder(); 
    for(string name : order1) { 
        cout << name << " "; 
    } 
    cout << endl; 
 
    // Step 4: Mark a person as dead 
    kingdom.death("Charles"); 
 
    // Step 5: Display updated inheritance order 
    cout << "Updated Inheritance Order:\n"; 
    vector<string> order2 = kingdom.getInheritanceOrder(); 
    for(string name : order2) { 
        cout << name << " "; 
    } 
    cout << endl; 
 
    return 0; 
} 