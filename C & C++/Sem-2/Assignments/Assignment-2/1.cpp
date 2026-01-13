#include <bits/stdc++.h>
using namespace std;

int main() {
    int A[3]={10,100,200};
    int *p;
    p=A;
    int i=0;
    for(auto num : A){
        cout<<"Address of A["<<i<<"] is "<<p+i<<endl;
        i++;
        cout<<*p<<endl;
        p++;
    }
    cout<<endl;
    for(auto num : A){
        cout<<"Address of A["<<i<<"] is "<<p+i<<endl;
        i--;
        p--;
        cout<<*p<<endl;
    }
    cout<<endl<<"Janmejai Pandey - 2501030199 - B4"<<endl;
}