#include<iostream>
using namespace std;

//Parent class
class Animal
{
    public:
        void eat(){
            cout<<endl<<"Eating"<<endl;
        }
};

//child class
class Dog : public Animal{
    public:
        void bark(){
            cout<<"Barking"<<endl;
        }  
};

int main()
{
    Dog obj;
    obj.eat();
    obj.bark();
    
    return 0;
}