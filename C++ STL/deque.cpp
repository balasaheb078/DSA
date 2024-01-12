/* deque (double-ended queue) is a container that allows you to add 
and remove elements from both ends of the container.*/  

#include <iostream>
#include <deque>

using namespace std;
int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2);
    // d.pop_front(); cout<<endl;
    
    cout << "Element at First index : " << d.at(1) << endl;
    cout << "front element:" << d.front() << endl;
    cout << "back element:" << d.back() << endl;
    cout << "is Empty or not:" << d.empty() << endl;
    cout << "size before erase:" << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "size after erase:" << d.size() << endl;
   
    for (int i:d)
    {
        cout << i << endl;
    }
}