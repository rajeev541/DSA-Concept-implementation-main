#include<iostream>
using namespace std;

class thisPointer{
    public:
        string name;
        int id;
        int salary;
    thisPointer(string name,int id,int salary){
        this->name = name;
        this->id = id;
        this->salary = salary;
    }
    void Display()
    {
        cout<<"emp Name "<<name<<endl;
        cout<<"emp id "<<id<<endl;
        cout<<"emp salary "<<salary<<endl;
    }
};

int main()
{
    thisPointer e1 = thisPointer("shuaib",101,100000);
    e1.Display();
    return 0;
}