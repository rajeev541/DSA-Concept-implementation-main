#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollno;

public:
    string getName(){
        return name;
    }
    int getRollno()
    {
        return rollno;
    }
    void setName(string name)
    {
       this->name = name;
    }
    void setRoll(int rollno)
    {
        this->rollno = rollno;
    }
};

int main()
{
    Student s1;
    s1.setName("shuaib");
    s1.setRoll(101);

    cout << "student name is " << s1.getName() << endl;
    cout << "student roll is " << s1.getRollno();
    return 0;
}