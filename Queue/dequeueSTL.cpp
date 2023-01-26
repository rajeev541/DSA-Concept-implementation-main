#include <iostream>
#include <queue>
using namespace std;

int main()
{
    deque<int> de;

    de.push_front(10);
    de.push_back(23);

    cout << de.front() << endl;
    cout << de.back() << endl;

    de.pop_front();

    cout << de.front() << endl;
    cout << de.back() << endl;

    if (de.empty())
        cout << "queue is empty " << endl;
    else
        cout << " queue is not empty " << endl;

    return 0;
}