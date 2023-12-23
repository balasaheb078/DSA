#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout<<"Printing array elements with index..."<<endl;
    for (int i = 0; i < size; i++)
    {
        cout <<"Element at index"<<i<<":"<<arr[i] << endl;
    }

    cout<<"---------------------------------"<<endl;
}
int main()
{
    int first[3] = {1, 65, 54};
    printArray(first, 3);

    // array initialized with zero
    int second[15] = {0};
    printArray(second, 15);

    // array initialized with one
    int third[15] = {1};
    printArray(third, 15);

    int fourth[15] = {1, 65, 54};
    printArray(fourth, 15);
