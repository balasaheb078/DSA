#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l;

    list<int> n(5, 100); // 5 is the size of list and it will be initilized with 100

    cout << "Printing list n:" << endl;
    for (int i : n)
    {
        cout << i << " ";
    }
    cout << endl;

    l.push_back(1);
    l.push_front(2);
    l.push_back(6);
    l.push_back(16);

    cout << "Printing list l:" << endl;
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    l.erase(l.begin());
    cout << "list after erasing :" << endl;
    for (int i : l)
    {
        cout << i << " ";
    }

    cout << "\nsize of list:" << l.size() << endl;
}