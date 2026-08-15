#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

void insertAtHead(Node*& head, int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

void insertN(Node*& head, int n) {
    int value;

    for (int i = 0; i < n; i++) {
        cout << "Enter data " << i + 1 << ": ";
        cin >> value;

        insertAtHead(head, value);
    }
}

void printList(Node* head) {
    cout << "{";

    while (head != nullptr) {
        cout << head->data;

        if (head->next != nullptr)
            cout << ", ";

        head = head->next;
    }

    cout << "}" << endl;
}

int countNodes(Node* head) {
    int count = 0;

    while (head != nullptr) {
        count++;
        head = head->next;
    }

    return count;
}

double findAverage(Node* head) {
    if (head == nullptr)
        return 0;

    long long sum = 0;
    int count = 0;

    while (head != nullptr) {
        sum += head->data;
        count++;
        head = head->next;
    }

    return (double)sum / count;
}

void printFirstM(Node* head, int m) {
    int total = countNodes(head);

    if (m <= 0 || m > total) {
        cout << "Incorrect value of m" << endl;
        return;
    }

    cout << "{";

    for (int i = 0; i < m; i++) {
        cout << head->data;

        if (i != m - 1)
            cout << ", ";

        head = head->next;
    }

    cout << "}" << endl;
}

void findMiddle(Node* head) {
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }

    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    cout << slow->data;

    if (slow->data % 2 == 0)
        cout << " is even" << endl;
    else
        cout << " is odd" << endl;
}

void printLastL(Node* head, int l) {
    int total = countNodes(head);

    if (l <= 0 || l > total) {
        cout << "Incorrect value of l" << endl;
        return;
    }

    Node* temp = head;

    for (int i = 0; i < total - l; i++) {
        temp = temp->next;
    }

    cout << "{";

    for (int i = 0; i < l; i++) {
        cout << temp->data;

        if (i != l - 1)
            cout << ", ";

        temp = temp->next;
    }

    cout << "}" << endl;
}

bool deleteValue(Node*& head, int value) {
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

bool exchangePairs(Node* head,
                   int a, int b,
                   int c, int d) {

    Node* pair1 = nullptr;
    Node* pair2 = nullptr;

    Node* temp = head;

    while (temp != nullptr && temp->next != nullptr) {
        if (temp->data == a && temp->next->data == b) {
            pair1 = temp;
            break;
        }

        temp = temp->next;
    }

    temp = head;

    while (temp != nullptr && temp->next != nullptr) {
        if (temp->data == c && temp->next->data == d) {
            pair2 = temp;
            break;
        }

        temp = temp->next;
    }

    if (pair1 == nullptr || pair2 == nullptr)
        return false;

    pair1->data = c;
    pair1->next->data = d;

    pair2->data = a;
    pair2->next->data = b;

    return true;
}

int findSubList(Node* head, Node* subHead) {

    if (subHead == nullptr)
        return 1;

    int position = 1;

    while (head != nullptr) {

        Node* p = head;
        Node* q = subHead;

        while (p != nullptr &&
               q != nullptr &&
               p->data == q->data) {

            p = p->next;
            q = q->next;
        }

        if (q == nullptr)
            return position;

        head = head->next;
        position++;
    }

    return -1;
}

void reverseSubList(Node*& head,
                    int startPosition,
                    int length) {

    if (head == nullptr || length <= 1)
        return;

    Node* current = head;
    Node* before = nullptr;

    for (int i = 1; i < startPosition; i++) {
        before = current;
        current = current->next;
    }

    Node* subListTail = current;
    Node* previous = nullptr;

    for (int i = 0; i < length; i++) {
        Node* nextNode = current->next;

        current->next = previous;
        previous = current;
        current = nextNode;
    }

    if (before != nullptr)
        before->next = previous;
    else
        head = previous;

    subListTail->next = current;
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

    cout << "Enter number of nodes: ";
    cin >> n;

    insertN(head, n);

    cout << "\nLinked List: ";
    printList(head);

    cout << "\nNumber of nodes = "
         << countNodes(head) << endl;

    cout << "Average = "
         << findAverage(head) << endl;

    int m;
    cout << "\nEnter m: ";
    cin >> m;

    cout << "First " << m << " elements: ";
    printFirstM(head, m);

    cout << "\nMiddle element: ";
    findMiddle(head);

    int l;
    cout << "\nEnter l: ";
    cin >> l;

    cout << "Last " << l << " elements: ";
    printLastL(head, l);

    int value;
    cout << "\nEnter number to find and delete: ";
    cin >> value;

    if (deleteValue(head, value)) {
        cout << value
             << " exists in the original list" << endl;

        cout << "Final list: ";
        printList(head);
    }
    else {
        cout << value
             << " does not exist in the list" << endl;
    }

    int a, b, c, d;
    cout << "\nEnter first pair: ";
    cin >> a >> b;

    cout << "Enter second pair: ";
    cin >> c >> d;

    if (exchangePairs(head, a, b, c, d)) {
        cout << "After exchanging pairs: ";
        printList(head);
    }
    else {
        cout << "One or both pairs do not exist."
             << endl;
    }

    int subN;
    cout << "\nEnter size of sub-list: ";
    cin >> subN;

    Node* subHead = nullptr;
    Node* subTail = nullptr;

    cout << "Enter sub-list elements: ";

    for (int i = 0; i < subN; i++) {

        int value;
        cin >> value;

        Node* newNode = new Node(value);

        if (subHead == nullptr) {
            subHead = newNode;
            subTail = newNode;
        }
        else {
            subTail->next = newNode;
            subTail = newNode;
        }
    }

    int position = findSubList(head, subHead);

    if (position != -1) {
        cout << "Sub-list exists at position "
             << position << endl;
    }
    else {
        cout << "Sub-list does not exist." << endl;
    }

    if (position != -1) {

        int subLength = countNodes(subHead);

        reverseSubList(head, position, subLength);

        cout << "After reversing sub-list: ";
        printList(head);
    }

    deleteList(subHead);
    deleteList(head);

    return 0;
}