#include <iostream>
using namespace std;

int main()
{
    int num = 5;

    int *ptr = &num;

    // Adress of operator - &
    cout << "Adress is : " << &num << endl;
    cout << "value is : " << num << endl;

    cout << "value is : " << ptr << endl;
    cout << "Address is : " << *ptr << endl;

    double i = 3.2;
    double *q = &i;

    cout << "Adress of  : " << &i << endl;
    cout << "Value is : " << i << endl;

    cout << "Adress is : " << q << endl;
    cout << "value is : " << *q << endl;

    char k = 'a';
    char *kp = &k;
    // size of pointer variable;

    cout <<"Size of Integer " << sizeof(num) << endl;
    cout <<"Size of pinter "<< sizeof(ptr) << endl;
    cout <<"Size of double "<< sizeof(i) << endl;
    cout <<"Size of pointer "<< sizeof(q) << endl;
    cout <<"Size of char "<< sizeof(k) << endl;
    cout <<"Size of pointer "<< sizeof(kp) << endl;

    // POINTER SIZE ALWAYS SAME.

    return 0;
}
