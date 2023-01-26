#include <iostream>
using namespace std;

class Shuaib
{
public:
    void sayHello()
    {
        cout << "Hello shuaib" << endl;
    }
    void sayHello(int n)
    {
        cout << "Hello shuaib again" << endl;
    }
};
int main()
{
    Shuaib obj;
    obj.sayHello();
    obj.sayHello(5);
    return 0;
}