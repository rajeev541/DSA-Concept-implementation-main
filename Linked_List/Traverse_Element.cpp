#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

 void Print(Node *ptr)
    {
        while (ptr != 0)
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
    Print(head);
    return 0;
}