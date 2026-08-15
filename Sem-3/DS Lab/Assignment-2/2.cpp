#include <iostream>
#include <string>
using namespace std;

struct Node {
    string data;
    Node* next;

    Node(string value) {
        data = value;
        next = nullptr;
    }
};

void insertAtEnd(Node*& head, string value) {
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
    if (head == nullptr) {
        cout << "Linked list is empty." << endl;
        return;
    }

    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }

    cout << endl;
}

void printStartingWith(Node* head, char alphabet) {
    bool found = false;

    while (head != nullptr) {
        if (!head->data.empty() && head->data[0] == alphabet) {
            cout << head->data << " ";
            found = true;
        }

        head = head->next;
    }

    if (!found)
        cout << "No string found.";

    cout << endl;
}

bool searchString(Node* head, string value) {
    while (head != nullptr) {
        if (head->data == value)
            return true;

        head = head->next;
    }

    return false;
}

string maximumLengthString(Node* head) {
    if (head == nullptr)
        return "";

    string maximum = head->data;
    head = head->next;

    while (head != nullptr) {
        if (head->data.length() > maximum.length())
            maximum = head->data;

        head = head->next;
    }

    return maximum;
}

void checkXYZ(Node* head) {
    bool found = false;

    while (head != nullptr) {
        if (head->data.find("xyz") != string::npos) {
            cout << head->data << " contains xyz." << endl;
            found = true;
        }

        head = head->next;
    }

    if (!found)
        cout << "No node contains xyz." << endl;
}

void interchangePositions(Node* head, int p1, int p2) {
    if (head == nullptr) {
        cout << "Linked list is empty." << endl;
        return;
    }

    if (p1 <= 0 || p2 <= 0) {
        cout << "Invalid positions." << endl;
        return;
    }

    Node* node1 = nullptr;
    Node* node2 = nullptr;
    Node* temp = head;

    int position = 1;

    while (temp != nullptr) {
        if (position == p1) {
            node1 = temp;
            break;
        }

        temp = temp->next;
        position++;
    }

    temp = head;
    position = 1;

    while (temp != nullptr) {
        if (position == p2) {
            node2 = temp;
            break;
        }

        temp = temp->next;
        position++;
    }

    if (node1 == nullptr || node2 == nullptr) {
        cout << "Error: One or both positions do not exist." << endl;
        return;
    }

    string tempString = node1->data;
    node1->data = node2->data;
    node2->data = tempString;

    cout << "Strings interchanged successfully." << endl;
}

bool deleteByValue(Node*& head, string value) {
    if (head == nullptr)
        return false;

    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return true;
    }

    Node* previous = head;
    Node* current = head->next;

    while (current != nullptr) {
        if (current->data == value) {
            previous->next = current->next;
            delete current;
            return true;
        }

        previous = current;
        current = current->next;
    }

    return false;
}

bool deleteByPosition(Node*& head, int position) {
    if (head == nullptr || position <= 0)
        return false;

    if (position == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return true;
    }

    Node* previous = head;
    Node* current = head->next;
    int currentPosition = 2;

    while (current != nullptr) {
        if (currentPosition == position) {
            previous->next = current->next;
            delete current;
            return true;
        }

        previous = current;
        current = current->next;
        currentPosition++;
    }

    return false;
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
    cout << "Enter number of strings: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        string value;
        cin >> value;
        insertAtEnd(head, value);
    }

    cout << "\n(a) ";
    printList(head);

    char alphabet;
    cout << "\n(b) Enter alphabet: ";
    cin >> alphabet;
    printStartingWith(head, alphabet);

    string searchValue;
    cout << "\n(c) Enter string to search: ";
    cin >> searchValue;

    if (searchString(head, searchValue))
        cout << searchValue << " exists in the linked list." << endl;
    else
        cout << searchValue << " does not exist in the linked list." << endl;

    cout << "\n(d) Maximum length string: "
         << maximumLengthString(head) << endl;

    cout << "\n(e) ";
    checkXYZ(head);

    int p1, p2;
    cout << "\n(f) Enter p1 and p2: ";
    cin >> p1 >> p2;

    interchangePositions(head, p1, p2);

    cout << "List after interchange: ";
    printList(head);

    string deleteValue;
    cout << "\n(g) Enter string to delete: ";
    cin >> deleteValue;

    if (deleteByValue(head, deleteValue))
        cout << "String deleted successfully." << endl;
    else
        cout << "String does not exist." << endl;

    printList(head);

    int deletePosition;
    cout << "\nEnter position to delete: ";
    cin >> deletePosition;

    if (deleteByPosition(head, deletePosition))
        cout << "Node deleted successfully." << endl;
    else
        cout << "Position does not exist." << endl;

    printList(head);

    deleteList(head);

    cout << "\nJanmejai Pandey - B4 - 2501030199" << endl;

    return 0;
}