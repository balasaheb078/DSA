#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (key == arr[mid])
        {
            return mid;
        }

        if (key < arr[mid])
        {
            end = mid - 1;
        }
        else //key > arr[mid]
        {
            start = mid + 1;
        }

        mid = (start + end) / 2;
    }
    return -1; //returns -1 if key not found
}

int main()
{
    int evenArray[6] = {12, 22, 34, 47, 57, 69};
    int oddArray[5] = {16, 36, 44, 66, 77};

    int evenindex = binarySearch(evenArray, 6, 47);
    cout << "Element found at index " << evenindex << endl;

    int oddindex = binarySearch(oddArray, 5, 44);
    cout << "Element found at index " << oddindex << endl;
}