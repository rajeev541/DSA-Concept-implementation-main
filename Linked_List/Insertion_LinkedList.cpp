#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

};

//Node Inserted at first point. 
void InsertAtFirst(Node *&head)
{
    Node *ptr;
    ptr = new Node();
    ptr->data = 40;

    ptr->next = head;
    head = ptr;
}

//Print the all node
void Print(Node* &head)
{
    Node* ptr = head;
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

    cout << "After Insertion" << endl;
    InsertAtFirst(head);
    Print(head);
    return 0;
}