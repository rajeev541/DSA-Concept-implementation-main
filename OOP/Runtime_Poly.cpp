#include <iostream>
using namespace std;

class Parent
{
public:
    void show()
    {
        cout << "Inside Parent class" << endl;
    }
};

class subClass1 : public Parent
{
public:
    void show()
    {
        cout << "Inside subclass 1" << endl;
    }
};

class subClass2 : public Parent
{
public:
    void show()
    {
        cout << "Inside SubClass 2" << endl;
    }
};

int main()
{
    subClass1 o1;
    subClass2 o2;

    o1.show();
    o2.show();
    return 0;
}