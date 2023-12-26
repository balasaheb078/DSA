#include <iostream>
using namespace std;

//for array which contains value between -1000 to 1000
int getMin(int arr[],int size){

    int min = 1000;
    for (int i = 0; i < size; i++)
    {
       if(min > arr[i]){
        min=arr[i];
    }
    }
    
    
    return min;

}


int getMax(int arr[],int size){

    int max = -1000;
    for (int i = 0; i < size; i++)
    {
       if(max < arr[i]){
        max=arr[i];
    }
    }
    
    
    return max;

}

int main()
{
    int arr[100];
    int size;
    cout<<"Enter the size of array:"<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

   cout<<"Max value in array: " <<getMax(arr,size)<<endl;
   cout<<"Min value in array: " <<getMin(arr,size)<<endl;

    
}
