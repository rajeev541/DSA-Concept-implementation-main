#include <iostream>
using namespace std;

class A
{
public:
    void show()
    {
        cout << endl
             << "Inside class A" << endl;
    }
};

class B
{
public:
    void show()
    {
        cout << "Inside class B" << endl;
    }
};

class c : public A, public B
{
public:
};

int main()
{
    c obj;
    //obj.show();     // error: request for member 'show' is ambiguous

    obj.B::show();

    return 0;
}