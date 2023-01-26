#include <iostream>
using namespace std;

class Animal
{
public:
    void Eat()
    {
        cout << "Eating" << endl;
    }
};

class Dog 
{
public:
    void bark()
    {
        cout << "Barking" << endl;
    }
};

class BullDog : public Dog,public Animal
{
public:
    void wip()
    {
        cout << "Wiping" << endl;
    }
};

int main()
{
    BullDog obj;

    obj.bark();
    obj.Eat();
    obj.wip();

    return 0;
}