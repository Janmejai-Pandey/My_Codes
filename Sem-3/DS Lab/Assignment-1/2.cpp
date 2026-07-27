// Q2. Given an array of numbers, input one number from this array and find if it’s next-
// greater-element exists to the right of this value in the array. If yes, give the position;
// else print“Notfound”. Use stacks to perform this operation.

// Q2. Given an array of numbers, input one number from this array and find if it's next-greater-element exists to the right of this value in the array. If yes, give the position; else print“Notfound”. Use stacks to perform this operation.

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums;
    cout << "Enter number(-999 to stop) -";
    int temp;
    while(true){
        cin >> temp;
        if(temp == -999)    break;
        nums.push_back(temp);
    }

    int n = nums.size();
    int i = n-1;
    int check;
    cout << "Enter a number - ";
    cin >> check;

    stack<int> stk;

    while(nums[i]!=check){
        stk.push(nums[i--]);
    }

    int far = 1;
    while(stk.top()<check){
        stk.pop();
        far++;
        if(stk.empty()){
            cout << "Not found";
            return 0;
        }
    }
    cout << far; 
    return 0;
}