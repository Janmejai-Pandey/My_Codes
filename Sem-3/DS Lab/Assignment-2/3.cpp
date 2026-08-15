#include <iostream>
#include <string>
using namespace std;

struct Node {
    char data;
    Node* next;

    Node(char value) {
        data = value;
        next = nullptr;
    }
};

void insertEnd(Node*& head, char value) {
    Node* newNode = new Node(value);

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;

    while (temp->next != nullptr)
        temp = temp->next;

    temp->next = newNode;
}

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data;
        head = head->next;
    }

    cout << endl;
}

void remove(Node*& head, string pattern) {
    if (head == nullptr || pattern.length() < 3)
        return;

    Node* prev = nullptr;
    Node* curr = head;

    while (curr != nullptr &&
           curr->next != nullptr &&
           curr->next->next != nullptr) {

        if (curr->data == pattern[0] &&
            curr->next->data == pattern[1] &&
            curr->next->next->data == pattern[2]) {

            Node* temp1 = curr;
            Node* temp2 = curr->next;
            Node* temp3 = curr->next->next;

            if (prev == nullptr)
                head = temp3->next;
            else
                prev->next = temp3->next;

            delete temp1;
            delete temp2;
            delete temp3;

            if (prev == nullptr)
                curr = head;
            else
                curr = prev->next;
        }
        else {
            prev = curr;
            curr = curr->next;
        }
    }
}

int main() {
    Node* first = nullptr;
    Node* second = nullptr;

    string str1, str2;

    cout << "Enter 10 characters: ";
    cin >> str1;

    cout << "Enter 5 characters: ";
    cin >> str2;

    if (str1.length() != 10 || str2.length() != 5) {
        cout << "Invalid input." << endl;
        cout << "\nJanmejai Pandey - B4 - 2501030199" << endl;
        return 0;
    }

    for (char ch : str1)
        insertEnd(first, ch);

    for (char ch : str2)
        insertEnd(second, ch);

    cout << "First linked list: ";
    printList(first);

    cout << "Second linked list: ";
    printList(second);

    for (int i = 0; i <= 2; i++) {
        string pattern = "";

        Node* temp = second;

        for (int j = 0; j < i + 3 && temp != nullptr; j++) {
            pattern += temp->data;
            temp = temp->next;
        }

        if (pattern.length() == 3)
            remove(first, pattern);
    }

    cout << "Final linked list: ";
    printList(first);

    cout << "\nJanmejai Pandey - B4 - 2501030199" << endl;

    return 0;
}