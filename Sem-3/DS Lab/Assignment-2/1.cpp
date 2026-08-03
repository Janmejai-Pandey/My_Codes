#include <iostream>
using namespace std;

struct Node
{
    int val;
    Node *next;

    Node(int data)
    {
        val = data;
        next = nullptr;
    }
};

Node *head;

void insertAtHead(int val)
{
    if (!head)
    {
        head = new Node(val);
        return;
    }

    Node *temp = new Node(val);
    temp->next = head;
    head = temp;
}

int getSize()
{
    Node *temp = head;
    int count = 0;
    while (temp)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

double getAvg(int size)
{
    int sum = 0;
    Node *temp = head;

    while (temp)
    {
        sum += temp->val;
        temp = temp->next;
    }

    return (double)sum / size;
}

void showM(int m, int n)
{
    if (m > n)
    {
        cout << "Invalid value of m." << endl;
        return;
    }

    Node *temp = head;
    while (m--)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void middle(int n)
{
    int mid1 = -9999, mid2 = -9999;
    int mididx = n / 2;
    Node *temp = head;
    while (mididx--)
    {
        mid1 = mid2;
        mid2 = temp->val;
        temp = temp->next;
    }

    if (n % 2 == 0)
    {
        cout << "Middle elements are - " << mid1 << "(" << (mid1 % 2 ? "even" : "odd") << ") and " << mid2 << "(" << (mid2 % 2 ? "even" : "odd") << ")";
    }
    else
    {
        cout << "Middle elements is - " << mid2 << "(" << (mid2 % 2 ? "even" : "odd") << ")";
    }
    cout << endl;
}

int main()
{
    cout << "Enter elements in LL(-9999 to stop) - ";
    while (true)
    {
        int temp;
        cin >> temp;
        if (temp == -9999)
        {
            break;
        }
        insertAtHead(temp);
    }

    int n = getSize();
    double avg = getAvg(n);
    cout << "Size - " << n << endl;
    cout << "Average - " << avg << endl;;

    showM(3, 5);
    middle(n);
}