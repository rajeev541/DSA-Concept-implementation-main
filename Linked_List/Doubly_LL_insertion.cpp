#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }

    ~Node()
    {
        int value = data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory free from Node " << value;
    }
};

// insert at first position.
void insertAtFirst(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

// insert at last position.
void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{
    Node *newNode = new Node(d);

    // if position is 1.
    if (position == 1)
    {
        insertAtFirst(head, d);
        return;
    }

    Node *temp = head;
    int i = 1;
    while (i < position - 1)
    {
        temp = temp->next;
        i++;
    }
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
}

void print(Node *head)
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
    Node *node1 = new Node(5);
    Node *head = node1;
    Node *tail = node1;

    print(head);
    insertAtFirst(head, 10);
    print(head);
    insertAtFirst(head, 15);
    print(head);

    insertAtTail(tail, 20);
    print(head);

    insertAtTail(tail, 25);
    print(head);

    insertAtPosition(tail, head, 3, 1);
    print(head);

    return 0;
}