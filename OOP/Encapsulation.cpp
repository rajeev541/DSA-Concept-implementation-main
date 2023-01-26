#include <iostream>
using namespace std;

class Student
{
private:
    string studentName;
    int studentRollNo;
    int StudentAge;

public:
    void setName(string studentName)
    {
        this->studentName = studentName;
    }
    string getName()
    {
        return studentName;
    }

    void setRoll(int studentRollNo)
    {
        this->studentRollNo = studentRollNo;
    }
    int getRoll()
    {
        return studentRollNo;
    }
    void setAge(int studentAge)
    {
        this->StudentAge = studentAge;
    }
    int getAge()
    {
        return StudentAge;
    }
};

int main()
{
    Student s1;
    s1.setName("shuaib");
    s1.setRoll(101);
    s1.setAge(22);

    cout << endl
         << "Student Details" << endl;
    cout << "Student Name is " << s1.getName() << endl;
    cout << "Student Roll No is " << s1.getRoll() << endl;
    cout << "Student Age is " << s1.getAge() << endl;

    return 0;
}