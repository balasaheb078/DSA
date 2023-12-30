#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[10] = {4, -5, 66, 1, 33, 75, 69, 10, 0, 12};
    int size;
    cout << "Enter the element to be search" << endl;
    int key;
    cin >> key;

    bool found = search(arr, 10, key);
    if (found)
    {
        cout << "Element is present in array." << endl;
    }
    else
    {
        cout << "Element is not present in array." << endl;
    }
}
