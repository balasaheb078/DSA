#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < (n - 1); i++)
    {
        int min = i;
        for (int j = (i + 1); j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }

    cout << "sorted array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[5] = {4, 6, 1, 10, 8};

    selectionSort(arr, 5);
}