#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

Node *insertAt(Node* head, int pos, int val) {
    Node* newNode = new Node(val);
    if (pos == 0) {
        newNode->next = head;
        return newNode;
    }
    Node* current = head;
    for (int i = 0; i < pos - 1 && current != nullptr; i++) {
        current = current->next;
    }
    if (current == nullptr) {
        delete newNode;
        return head;
    }
    newNode->next = current->next;
    current->next = newNode;
    return head;
}