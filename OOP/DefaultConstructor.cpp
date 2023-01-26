#include <iostream>
using namespace std;

class Constructor
{
public:
    int a, b;

    Constructor()
    {
        a = 10;
        b = 5;
        cout << "constructor called";
    }
};

int main()
{
    Constructor c1;
    cout << endl;
    cout << "a = " << c1.a << endl;
    cout << "b = " << c1.b;

    return 0;
}