#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;

    Node(int value) {
        data = value;
        prev = nullptr;
        next = nullptr;
    }
};

void insertEnd(Node*& head, int value) {
    Node* newNode = new Node(value);

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;

    while (temp->next != nullptr)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
}

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }

    cout << endl;
}

void ExtremeSwap(Node* head, int call) {
    Node* left = head;
    Node* right = head;

    if (head == nullptr)
        return;

    while (right->next != nullptr)
        right = right->next;

    for (int i = 0; i < call; i++) {
        if (left == nullptr || right == nullptr || left == right)
            return;

        if (left->next == right)
            return;

        int temp = left->data;
        left->data = right->data;
        right->data = temp;

        left = left->next;
        right = right->prev;
    }
}

void deleteList(Node*& head) {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    Node* head = nullptr;

    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";

    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        insertEnd(head, value);
    }

    cout << "\nOriginal list: ";
    printList(head);

    int calls = n / 2;

    for (int i = 1; i <= calls; i++) {
        ExtremeSwap(head, 1);

        cout << "After call " << i << ": ";
        printList(head);
    }
    
    deleteList(head);
    
        cout << "\nJanmejai Pandey - B4 - 2501030199" << endl;

    return 0;
}