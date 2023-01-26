#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor.
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free with the Node " << value << endl;
    }
};

void insertAtHead(Node *&head, int d)
{

    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{

    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void deleteNode(Node *&head, int position)
{

    // if first node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    // if node is middle or last

    else
    {
        Node *prev = NULL;
        Node *curr = head;
        int i = 1;
        while (i < position)
        {
            prev = curr;
            curr = curr->next;
            i++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void insertAtPosition(Node *&tail, Node *&head, int d, int position)
{
    Node *newNode = new Node(d);

    // If insert at first position
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    Node *ptr = head;
    int i = 1;
    while (i < position - 1)
    {
        ptr = ptr->next;
        i++;
    }

    if (ptr->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }
    // If insert at last position
    newNode->next = ptr->next;
    ptr->next = newNode;
}

void Print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(10);

    Node *head = node1;
    Node *tail = node1;

    Print(head);
    // insertAtHead(head,12);
    // insertAtHead(head,15);

    insertAtTail(tail, 12);
    Print(head);
    insertAtTail(tail, 15);
    Print(head);

    insertAtPosition(tail, head, 22, 4);
    Print(head);

    deleteNode(head, 2);
    Print(head);

    return 0;
}