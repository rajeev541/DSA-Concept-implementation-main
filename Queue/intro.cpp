#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;

    q.push(10);
    cout << "front element " << q.front() << endl;

    q.push(20);
    cout << "front element " << q.front() << endl;
    
    q.push(30);
    cout << "front element " << q.front() << endl;
    cout << "rear element of queue " << q.back() << endl;
    
    cout << "size of queue " << q.size() << endl;
    q.pop();
    
    cout << "size of queue " << q.size() << endl;

    q.pop();
    q.pop();
    
    if (q.empty())
        cout << "Queue is empty bro " << endl;
    else
        cout << "Queue is not empty bro " << endl;
    
    return 0;
}