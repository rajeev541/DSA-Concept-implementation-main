
// 1.Insert at first position
// 2.Insert at last position.
// 3.Insert at given position.

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

// Insert at given position
void InsertAtIndex(Node *&head, int index)
{
    Node *ptr = new Node();
    ptr->data = 25;

    int i = 0;
    Node *p = head;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
}

// Insert at last
void InsertAtEnd(Node *&head)
{
    Node *ptr = new Node();
    ptr->data = 50;

    Node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
}

// Node Inserted at first point.
void InsertAtFirst(Node *&head)
{
    Node *ptr;
    ptr = new Node();
    ptr->data = 40;

    ptr->next = head;
    head = ptr;
}

// Print the all node
void Print(Node *&head)
{
    Node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

int main()
{
    // Creating variable of Node type.
    Node *head;
    Node *second;
    Node *third;

    // Allcating memory on heap.
    head = new Node();
    second = new Node();
    third = new Node();

    // put the value.
    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    // address for checking purpose😂👍
    //  cout<<head->next<<endl;
    //  cout<<second;

    // Call the print function.
    cout << endl
         << "Before Insertion" << endl;
    Print(head);

    cout << "After Insertion at first." << endl;
    InsertAtFirst(head);
    Print(head);

    cout << "After Insert at End" << endl;
    InsertAtEnd(head);
    Print(head);

    cout << "Insert At given position" << endl;
    InsertAtIndex(head, 2);
    Print(head);
    return 0;
}