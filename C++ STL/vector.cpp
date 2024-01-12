#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    vector<int> a(6,3);  //6 is the size of vector ans it will be initilized with 3

    vector<int> last(a);
    // capacity ->  Current capacity of the vector

    cout << "Capacity:" << v.capacity() << endl;

    // push_back -> used to Add an element to the end

    v.push_back(2);
    cout << "Capacity:" << v.capacity() << endl;
    cout << "Size:" << v.size() << endl;
    v.push_back(6);
    v.push_back(21);
    cout << "Capacity:" << v.capacity() << endl;
    cout << "Size:" << v.size() << endl;
    v.push_back(60);

    cout << "Element at 3rd index:" << v.at(3) << endl;
    cout << "Front or fist element:" << v.front() << endl;
    cout<<"Last element:"<<v.back()<<endl;

    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
}
