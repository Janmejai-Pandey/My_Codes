#include <bits/stdc++.h>
using namespace std;

typedef struct nodeType{
    int info;
    nodeType *link;

    nodeType(int n){
        info = n;
        link =  nullptr;
    }
}nodeType;

int main() {

    nodeType *first, *last, * newNode;
    first = nullptr;
    last = nullptr;
    int num;

    num = 2;
    newNode = new nodeType(num);
    first = newNode;
    last = newNode;

    num = 15;
    newNode = new nodeType(num);
    last -> link = newNode;
    last = newNode;
    
    num = 8;
    newNode = new nodeType(num);
    last -> link = newNode;
    last = newNode;

    num = 24;
    newNode = new nodeType(num);
    last -> link = newNode;
    last = newNode;

    num = 34;
    newNode = new nodeType(num);
    last -> link = newNode;
    last = newNode;

    nodeType *curr = first;
    while(curr != nullptr){
        cout << curr->info << " ";
        curr = curr -> link;
    }
    return 0;
}