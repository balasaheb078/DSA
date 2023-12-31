#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}
void reverseArray(int arr[], int n)
{

    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[6] = {4, 6, 9, 7, 1, 2};
    int brr[5] = {1, 2, 3, 4, 5};

    cout << "Original Arrays:" << endl;
    printArray(arr, 6);
    printArray(brr, 5);

    reverseArray(arr, 6);
    reverseArray(brr, 5);

    cout << "Arrays after reversing:" << endl;
    printArray(arr, 6);
    printArray(brr, 5);
}
