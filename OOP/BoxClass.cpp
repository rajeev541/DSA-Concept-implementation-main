#include <iostream>
using namespace std;

class Box
{
public:
    int width;
    int hight;
    int deepth;
};

int main()
{
    Box obj;
    obj.width = 5;
    obj.hight = 15;
    obj.deepth = 10;

    int volume = obj.deepth * obj.hight * obj.width;

    cout << "Volume of box is " << volume;
    return 0;
}