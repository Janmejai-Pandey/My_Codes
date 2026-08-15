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

void insertElement(Node*& head, int value) {
    Node* newNode = new Node(value);

    if (head == nullptr) {
        head = newNode;
        newNode->next = head;
        return;
    }

    Node* temp = head;

    while (temp->next != head)
        temp = temp->next;

    temp->next = newNode;
    newNode->next = head;
}

void printElements(Node* head) {
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }

    Node* temp = head;

    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);

    cout << endl;
}

int countElements(Node* head) {
    if (head == nullptr)
        return 0;

    int count = 0;
    Node* temp = head;

    do {
        count++;
        temp = temp->next;
    } while (temp != head);

    return count;
}

bool hasNegative(Node* head) {
    if (head == nullptr)
        return false;

    Node* temp = head;

    do {
        if (temp->data < 0)
            return true;

        temp = temp->next;
    } while (temp != head);

    return false;
}

int countGreaterThan15(Node* head) {
    if (head == nullptr)
        return 0;

    int count = 0;
    Node* temp = head;

    do {
        if (temp->data > 15)
            count++;

        temp = temp->next;
    } while (temp != head);

    return count;
}

bool deleteElement(Node*& head, int value) {
    if (head == nullptr)
        return false;

    Node* current = head;
    Node* previous = nullptr;

    do {
        if (current->data == value)
            break;

        previous = current;
        current = current->next;
    } while (current != head);

    if (current->data != value)
        return false;

    if (current == head) {
        if (head->next == head) {
            delete head;
            head = nullptr;
            return true;
        }

        Node* last = head;

        while (last->next != head)
            last = last->next;

        head = head->next;
        last->next = head;

        delete current;
        return true;
    }

    previous->next = current->next;
    delete current;

    return true;
}

bool updateElement(Node* head, int oldValue, int newValue) {
    if (head == nullptr)
        return false;

    Node* temp = head;

    do {
        if (temp->data == oldValue) {
            temp->data = newValue;
            return true;
        }

        temp = temp->next;
    } while (temp != head);

    return false;
}

bool insertAtPosition(Node*& head, int value, int position) {
    if (position <= 0)
        return false;

    Node* newNode = new Node(value);

    if (head == nullptr) {
        if (position != 1) {
            delete newNode;
            return false;
        }

        head = newNode;
        newNode->next = head;
        return true;
    }

    if (position == 1) {
        Node* last = head;

        while (last->next != head)
            last = last->next;

        newNode->next = head;
        head = newNode;
        last->next = head;

        return true;
    }

    Node* temp = head;

    for (int i = 1; i < position - 1; i++) {
        temp = temp->next;

        if (temp == head) {
            delete newNode;
            return false;
        }
    }

    newNode->next = temp->next;
    temp->next = newNode;

    return true;
}

bool isPrime(int n) {
    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

void deletePrimeNodes(Node*& head) {
    if (head == nullptr)
        return;

    int n = countElements(head);

    for (int i = 0; i < n; i++) {
        if (head == nullptr)
            return;

        if (isPrime(head->data)) {
            deleteElement(head, head->data);
        }
        else {
            Node* temp = head;

            while (temp->next != head)
                temp = temp->next;

            head = head->next;

            temp->next = head;

            Node* current = temp->next;

            while (current->next != head)
                current = current->next;

            break;
        }
    }

    bool found;

    do {
        found = false;

        if (head == nullptr)
            return;

        Node* temp = head;

        do {
            if (isPrime(temp->data)) {
                int value = temp->data;
                deleteElement(head, value);
                found = true;
                break;
            }

            temp = temp->next;
        } while (temp != head);

    } while (found);
}

bool isPerfectSquare(int n) {
    if (n < 0)
        return false;

    int i = 0;

    while (i * i <= n) {
        if (i * i == n)
            return true;

        i++;
    }

    return false;
}

bool isFibonacci(int n) {
    if (n < 0)
        return false;

    return isPerfectSquare(5 * n * n + 4) ||
           isPerfectSquare(5 * n * n - 4);
}

void deleteFibonacciNodes(Node*& head) {
    if (head == nullptr)
        return;

    bool found;

    do {
        found = false;

        if (head == nullptr)
            return;

        Node* temp = head;

        do {
            if (isFibonacci(temp->data)) {
                int value = temp->data;
                deleteElement(head, value);
                found = true;
                break;
            }

            temp = temp->next;

        } while (temp != head);

    } while (found);
}

void deleteList(Node*& head) {
    if (head == nullptr)
        return;

    Node* current = head->next;

    while (current != head) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }

    delete head;
    head = nullptr;
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
        insertElement(head, value);
    }

    cout << "\n(a) Elements: ";
    printElements(head);

    cout << "\n(b) Elements: ";
    printElements(head);

    cout << "\n(c) Number of elements: "
         << countElements(head) << endl;

    cout << "\n(d) ";

    if (hasNegative(head))
        cout << "List contains a negative value." << endl;
    else
        cout << "List does not contain a negative value." << endl;

    cout << "\n(e) Number of nodes greater than 15: "
         << countGreaterThan15(head) << endl;

    int value;

    cout << "\n(f) Enter element to delete: ";
    cin >> value;

    if (deleteElement(head, value))
        cout << "Element deleted successfully." << endl;
    else
        cout << "Element not found." << endl;

    cout << "List: ";
    printElements(head);

    int oldValue, newValue;

    cout << "\n(g) Enter old value and new value: ";
    cin >> oldValue >> newValue;

    if (updateElement(head, oldValue, newValue))
        cout << "Element updated successfully." << endl;
    else
        cout << "Element not found." << endl;

    cout << "List: ";
    printElements(head);

    int position;

    cout << "\n(h) Enter value and position: ";
    cin >> value >> position;

    if (insertAtPosition(head, value, position))
        cout << "Element inserted successfully." << endl;
    else
        cout << "Invalid position." << endl;

    cout << "List: ";
    printElements(head);

    cout << "\n(i) Deleting prime number nodes..." << endl;

    deletePrimeNodes(head);

    cout << "List: ";
    printElements(head);

    cout << "\n(j) Deleting Fibonacci nodes..." << endl;

    deleteFibonacciNodes(head);

    cout << "Final list: ";
    printElements(head);

    
    deleteList(head);
    
    cout << "\nJanmejai Pandey - B4 - 2501030199" << endl;
    return 0;
}