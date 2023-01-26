#include <iostream>
using namespace std;

class stack
{
public:
    // propeties
    int *arr;
    int top;
    int size;

    // brhaviour
    stack(int size)
    {
        this->size = size;
        top = -1;
        arr = new int[size];
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "stack is overflow " << endl;
            ;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "stack is underflow " << endl;
        }
    }

    int peek()
    {
        if (top >= 0)
            return arr[top];
        else
        {
            cout << "stack is empty " << endl;
            return -1;
        }
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    stack s(5);
    s.push(10);
    s.push(12);

    cout << s.peek() << endl;
    s.pop();
    cout<<s.peek()<<endl;

    if(s.isEmpty()){
            cout << "stack is empty mere bhai" << endl;
    }
    else{
         cout << "stack is not empty mere bhai";
    }
    return 0;
}