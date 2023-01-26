#include <iostream>
using namespace std;

//parent class
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

class Cat : public Animal {
    public:
        void Meow(){
            cout<<"Meowing"<<endl;
        }
};


int main()
{
    Cat c;
    c.Eat();
    c.Meow();

    return 0;
}