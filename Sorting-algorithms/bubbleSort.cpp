#include <iostream>
using namespace std;

int bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - (i + 1); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// optimized bubbleSort

int OptimizedBubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - (i + 1); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
}

void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[5] = {100, 6, 1, 10, 8};

    /*
        cout << "Elements before sorting:" << endl;
        printArray(arr, 5);
        cout << "Elements after sorting:" << endl;
        bubbleSort(arr, 5);
        printArray(arr, 5);
    */

    // optimized bubbleSort

    cout << "Elements before sorting:" << endl;
    printArray(arr, 5);
    cout << "Elements after sorting:" << endl;
    OptimizedBubbleSort(arr, 5);
    printArray(arr, 5);
}