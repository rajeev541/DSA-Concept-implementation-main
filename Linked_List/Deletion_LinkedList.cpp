#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

// Deletion at first.
Node *DeleteAtfirst(Node *head)
{
    Node *ptr = head;
    head = head->next;
    delete ptr;
    return head;
}

void Print(Node *&ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    Print(head);
    head = DeleteAtfirst(head);
    cout << "After Deletion";
    return 0;
}