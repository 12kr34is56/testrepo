#include<iostream>
using namespace std;

int main(void){
    int arr[]={1,23,9,6,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    int max,min;
    max=arr[0];
    min=arr[0];
    
    for (int i = 1; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << max << endl;
    cout << min << endl;
}