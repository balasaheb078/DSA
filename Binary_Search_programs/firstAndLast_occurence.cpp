#include <iostream>
using namespace std;
//function for finding first occurence of an element in array.
int firstOccurence(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = (start + end) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (key == arr[mid])
        {
            ans = mid;
            end = mid - 1;
        }

        if (key < arr[mid])
        {
            end = mid - 1;
        }
        else // key > arr[mid]
        {
            start = mid + 1;
        }

        mid = (start + end) / 2;
    }
    return ans;
}

//function for finding last occurence of an element in array.

int lastOccurence(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = (start + end) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (key == arr[mid])
        {
            ans = mid;
            start = mid + 1;
        }

        if (key < arr[mid])
        {
            end = mid - 1;
        }
        else // key > arr[mid]
        {
            start = mid + 1;
        }

        mid = (start + end) / 2;
    }
    return ans;
}

int main()
{
    int Array[6] = {12, 22, 34, 34, 34, 69};
    

    int first = firstOccurence(Array, 6, 34);
    cout << "First occurence of 34 at index " << first << endl;

    int last = lastOccurence(Array, 6, 34);
    cout << "Last occurence of 34 at index " << last << endl;
    
    // total occurence of an element
    int totalOccurence = (last - first) + 1;
    cout<<"Total no of occurence of 34 is "<< totalOccurence << endl;
}
