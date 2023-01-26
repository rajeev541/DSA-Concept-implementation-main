#include <iostream>
using namespace std;

class Constructor
{
public:
    int a, b;

    // Parameterized constructor
    Constructor(int x, int y)
    {
        a = x;
        b = y;
        cout << "Parameterized constructor called" << endl;
    }
};

int main()
{
    // statically created object.
    //  Constructor c(10, 5);

    // Dynamicaly created object.
    Constructor *c = new Constructor(10, 5);
    cout << endl;
    cout << "A = " << c->a << endl;
    cout << "B = " << c->b << endl;
    return 0;
}