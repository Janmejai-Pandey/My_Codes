// Q1. Given a string ‘s’ containing just the characters '(', ')', '{', '}', '[' and ']', determine if the
// input string is valid. Assume that the string can contain parentheses only i.e., only '()[]{}'
// characters are allowed; and the maximum length of string can be, say, 20 characters. An
// input string is valid if:
// 1. Open brackets must be closed by the same type of brackets.
// 2. Open brackets must be closed in the correct order.
// 3. Every close bracket has a corresponding open bracket of the same type.

#include <bits/stdc++.h>
using namespace std;

bool check(char a, char b){
    if(b=='('||b=='{'||b=='['){
        return false;
    }
    if(a=='(' && b==')')    return true;
    if(a=='[' && b==']')    return true;
    if(a=='{' && b=='}')    return true;
    return false;
}

int main(){

    stack<char> stk;

    string str;

    cout << "Enter your paranthesis string - ";
    cin >> str;

    int i = 0;
    while(str[i]) {
        if(!stk.empty() && check(stk.top(),str[i])) {
            stk.pop();
        }
        else {
            stk.push(str[i]);
        }
        i++;
    }

    if(stk.empty()) cout << "true";
    else cout << "false";
    return 0;
}
