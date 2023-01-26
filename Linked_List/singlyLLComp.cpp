#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);

    temp->next = head;
    head = temp;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);

    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node *&head, int position, int d)
{
    Node *temp = new Node(d);
    Node *ptr = head;
    int i = 0;

    while (i < position - 1)
    {
        ptr = ptr->next;
        i++;
    }
    temp->next = ptr->next;
    ptr->next = temp;
}

// DELETION AT FIRST
void deleteAtFirst(Node *&head)
{
    Node *temp = head;
    head = head->next;
    delete (temp);
}

//  Deletion at last
void deleteAtPosition(int position, Node *&head)
{
    Node *curr = head;
    Node *prev = NULL;
    int i = 1;

    while (i < position)
    {
        prev = curr;
        curr = curr->next;
        i++;
    }

    prev->next = curr->next;
    curr->next = NULL;

    delete (curr);
}

main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    print(head);

    // insert at head
    insertAtHead(head, 20);
    print(head);

    // insert at tail
    insertAtTail(tail, 30);
    print(head);

    // insert at position
    insertAtPosition(head, 2, 50);
    print(head);

    cout << endl
         << "After Deletion" << endl;
    
    // deleteAtFirst(head);
    
    // DELETION .
    deleteAtPosition(3, head);
    print(head);
    return 0;
}
