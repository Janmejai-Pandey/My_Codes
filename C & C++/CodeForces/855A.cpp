#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<string> a;
    while(n--){
        string some;
        cin>>some;
        if(a.count(some))
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
            a.insert(some);
        }
    }
    return 0;
}