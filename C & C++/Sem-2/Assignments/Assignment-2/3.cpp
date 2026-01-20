#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    int* arr = new int[n];
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    cout << "Sum of elements: " << sum << endl;
    delete[] arr;
    cout << "\nJanmejai Pandey - 2501030199 - B4" << endl;
    return 0;
}