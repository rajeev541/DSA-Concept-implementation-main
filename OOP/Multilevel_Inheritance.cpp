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

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Barking" << endl;
    }
};

class BullDog : public Dog
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

    obj.Eat();
    obj.bark();
    obj.wip();
    
    return 0;
}