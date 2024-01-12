#include <iostream>
#include<array>

using namespace std;

int main()
{
    array<int,5> a ={4,6,8,1,3};

    int size = a.size();

    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Element at index 2:"<<a.at(2)<<endl;
    cout<<"Array is empty or not:"<<a.empty()<<endl;  //it will return 1 if array is empty otherwise it will return 0
    
    cout<<"First Element in Array:"<<a.front()<<endl;
    cout<<"Last Element in Array:"<<a.back()<<endl;

}