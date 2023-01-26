#include<iostream>
using namespace std;

class Destructor{
    public:

    Destructor(){
        cout<<"Constructor called"<<endl;
    }

    ~Destructor(){
        cout<<"Destructor called"<<endl;
    }
};

int main()
{
    // In statically Destructor automatically called;
    Destructor d3;

    //In dynamically Destructor mannually called
    Destructor *d1 = new Destructor();
    Destructor *d2 = new Destructor();
    delete d1;
    delete d2;


    return 0;
}