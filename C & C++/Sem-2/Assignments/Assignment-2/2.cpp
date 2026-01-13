#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    float *A = new float[n];
    for(int i=0; i<n; i++){
        cout<<"Enter CGPA of student "<<i+1<<": ";
        cin>>A[i];
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<"CGPA of student "<<i+1<<" is "<<*(A+i)<<endl;
    }
    cout<<endl<<"Janmejai Pandey - 2501030199 - B4"<<endl;
}